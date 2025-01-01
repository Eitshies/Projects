/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 22:32:40 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/25 22:59:36 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(void)
{
	int nums[] = {10, 100, 20, 47};
	int numsSize = sizeof(nums) / sizeof(nums[0]), target = 57, returnSize = 2;
	int *ptr = twoSum(nums, numsSize, target, &returnSize);
	if( returnSize == 2 && ptr != NULL)
	{
		printf("[%i,%i]\n", *ptr, *(ptr+1));
		free(ptr);
	}
	else
		printf("No match found!");
	return(0);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				*returnSize = 2;
				int *ptr = (int *)malloc(*returnSize * sizeof(int));
				ptr[0] = i;
				ptr[1] = j;
				return ptr;
			}
		}
	}

	printf("Allocating memory failed!");
	*returnSize = 0;
	return NULL;
}
