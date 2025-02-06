/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:44:18 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/12 16:47:39 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct item {
	int key;
	int value;
} item;

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int hash(int key, int size);

int main(void) {
	int nums[] = {3, 3};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 6;
	int returnSize;
	int *ptr = twoSum(nums, numsSize, target, &returnSize);
	if( ptr != NULL && returnSize == 2 ) {
		printf("[%i,%i]\n", ptr[0], ptr[1]);
	} else {
		printf("No solution found!\n");
	}
	free(ptr);
	return(0);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

	item *table = (item *)calloc(numsSize*2, sizeof(item));

	for( int i = 0; i < numsSize; i++) {

		int complement = target - nums[i];
		int index = hash(complement, numsSize*2);

		while(table[index].value != 0 ) {
			if( complement == table[index].key ) {
				*returnSize = 2;
				int *ptr = (int *)malloc(*returnSize * sizeof(int));
				ptr[0] = table[index].value -1;
				ptr[1] = i;
				free(table);
				return ptr;
			}
			index = ( index + 1 ) % ( numsSize * 2 );
		}

		int numsindex = hash(nums[i], numsSize*2);
		while( table[numsindex].value != 0 ) {
			numsindex = ( numsindex + 1 ) % ( numsSize * 2 );
		}
		table[numsindex].key = nums[i];
		table[numsindex].value = i + 1;

	}
		free(table);
		*returnSize = 0;
		return NULL;
}

int hash(int key, int size) {
	return abs(key) % size;
}
