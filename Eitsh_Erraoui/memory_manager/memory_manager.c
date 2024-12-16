/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:38:16 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/13 20:00:04 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int* ft_malloc(int size);
int* ft_calloc(int size);
int* ft_realloc(int *p, int new_size);
void ft_free(int *p);

int main(void)
{
	int choice;
	printf("If you want an ordinary array press 1, if you want an initialized array with 0 then press 2.\nEnter your choice here: ");
	scanf("%i", &choice);
	int size;
	printf("Alright now enter the number of elements: ");
	scanf("%i", &size);
	int *arr;

	switch( choice )
	{
		case 1:
			arr = ft_malloc(size);
			if(arr == NULL)
			{
				printf("Memory allocation failed!\n");
				return(1);
			}
	
			for(int i = 0; i < size; i++)
			{
				printf("Enter the element number %i: ", i);
				scanf("%i", &arr[i]);
			}
			printf("\n");
		
    		printf("Here is your ordinary array:\n");
			for (int i = 0; i < size; i++)
    		{
        		printf("%d ", arr[i]);
    		}
    		printf("\n");
			break;
		case 2:
			arr = ft_calloc(size);
			if(arr == NULL)
			{
				printf("Memory allocation failed!\n");
				return(1);
			}
			printf("Enter 1 if you wanna initialize it, or 2 you if you won't: ");
			int yes0no;
			scanf("%i", &yes0no);
			if (yes0no == 1)
			{
				for(int i = 0; i < size; i++)
				{
					printf("Enter the element number %i: ", i);
					scanf("%i", &arr[i]);
				}
				printf("\n");
			}
			else if(yes0no == 2)
    		{
				printf("Here is your initialized array:\n");
				for (int i = 0; i < size; i++)
    			{
        			printf("%d ", arr[i]);
    			}
    			printf("\n");
			}
			else
			{
				printf("Invalid option!");
				return(1);
			}
			break;
		default:
			printf("Invalid choice!");
			return(1);
	}
	printf("If you want to resize your array press 1, if not press 2, Enter here: ");
	int resizing;
	scanf("%i", &resizing);
	if( resizing == 1)
	{
		printf("Enter your new size: ");
		int newsize;
		scanf("%i", &newsize);
		arr = ft_realloc(arr, newsize);
		if (arr == NULL)
		{
			printf("Resizing memory failed!");
			return(1);
		}
		for(int i = size; i < newsize; i++)
		{
			printf("Enter the element number %i: ", i);
			scanf("%i", &arr[i]);
		}
		printf("\n");
   		printf("Here is your resized array:\n");
		for (int i = 0; i < newsize; i++)
   		{
       		printf("%d ", arr[i]);
   		}
   		printf("\n");
	}

	ft_free(arr);
	return(0);
}

int* ft_malloc(int size)
{
	int *p = (int *)malloc(size * sizeof(int));
	if(p == NULL)
		return NULL;
	return p;
}

int* ft_calloc(int size)
{
	int *p = (int *)calloc(size, sizeof(int));
	if(p == NULL)
	{
		return NULL;
	}
	return p;
}

int* ft_realloc(int *p, int new_size)
{
	p = (int *)realloc(p, new_size * sizeof(int));
	if(p == NULL)
	{
		return NULL;
	}
	return p;
}

void ft_free(int *p)
{
	free(p);
}

