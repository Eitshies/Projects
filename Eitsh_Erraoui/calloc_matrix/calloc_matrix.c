/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:58:51 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 17:35:23 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%i", &n);
	int arr[n];
	int *p = (int *)calloc(n, sizeof(int));
	for(int i = 0; i < n; i++)
	{
		printf("Enter the value of the index number %i: ", i);
		scanf("%i", &arr[i]);
	}
	for(int i = 0; i < n; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
	free(p);
		
	return (0);
}

