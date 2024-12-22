/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:34:34 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/18 20:43:12 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void init_allocator();
void *custom_malloc(size_t size);
void custom_free(void *ptr);

#define MEMORY_POOL_SIZE 1024  // Size of the memory pool
#define BLOCK_SIZE 32           // Minimum block size for allocation

int main() {
    // Initialize the allocator
    init_allocator();

    // Example usage of custom_malloc and custom_free
    void *ptr1 = custom_malloc(100);
    printf("Allocated 100 bytes at %p\n", ptr1);
	custom_free(ptr1);

    void *ptr2 = custom_malloc(200);
    printf("Allocated 200 bytes at %p\n", ptr2);
    custom_free(ptr1);

    void *ptr3 = custom_malloc(50);
    printf("Allocated 50 bytes at %p\n", ptr3);
	custom_free(ptr3);

    return 0;
}

// Memory pool
static char memoryPool[MEMORY_POOL_SIZE];

// Block structure
typedef struct Block {
    size_t size;        // Size of the block
    struct Block* next; // Pointer to the next block
    int free;          // Flag to indicate if the block is free
} Block;

static Block* freeList = NULL; // Head of the free list

// Function to initialize the memory allocator
void init_allocator() {
    freeList = (Block*)memoryPool; // Set the free list to the start of the memory pool
    freeList->size = MEMORY_POOL_SIZE - sizeof(Block);
    freeList->next = NULL;
    freeList->free = 1; // Mark the block as free
}

// Function to allocate memory
void* custom_malloc(size_t size) {
    if (size <= 0) {
        return NULL;
    }

    // Align size to the nearest multiple of BLOCK_SIZE
    size = (size + BLOCK_SIZE - 1) & ~(BLOCK_SIZE - 1);

    Block* current = freeList;

    // Traverse the free list to find a suitable block
    while (current) {
        if (current->free && current->size >= size) {
            // If the block is larger than needed, split it
            if (current->size > size + sizeof(Block)) {
                Block* newBlock = (Block*)((char*)current + sizeof(Block) + size);
                newBlock->size = current->size - size - sizeof(Block);
                newBlock->next = current->next;
                newBlock->free = 1;

                current->size = size;
                current->next = newBlock;
            }
            current->free = 0; // Mark the block as allocated
            return (char*)current + sizeof(Block); // Return pointer to the memory after the block header
        }
        current = current->next;
    }

    // No suitable block found
    return NULL;
}

// Function to free allocated memory
void custom_free(void* ptr) {
    if (!ptr) {
        return;
    }

    // Get the block header
    Block* block = (Block*)((char*)ptr - sizeof(Block));
    block->free = 1; // Mark the block as free
}

