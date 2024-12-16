/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:46:24 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 12:46:32 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	printerz(int arr[], int size);

int main(void)
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	printerz(arr, size);
	return(0);
}

void	printerz(int arr[], int size)
{
	int *p = arr;
	for(int i = 0; i < size; i++)
	{
		printf("%i ", *(p+i));
	}
	printf("\n");
}

