/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:23:07 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/16 16:07:29 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main(void)
{
	int nums[] = {1,2,3,4,5};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 7;
	int returnSize;
	int *arr = twoSum(nums, numsSize, target, &returnSize);
	printf("[%i,%i]\n", arr[0], arr[1]);
	free(arr);
	return(0);
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	for(int i = 0; i < numsSize; i++)
	{
		for(int j = i + 1; j < numsSize; j++)
		{
			if(nums[i] + nums[j] == target)
			{
				*returnSize = 2;
				int *p = (int *)malloc(*returnSize * sizeof(int));
				p[0] = i;
				p[1] = j;
				return(p);
			}
		}
	}
	return NULL;
}
