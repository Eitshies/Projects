/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_arithmetic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:48:07 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 12:48:20 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;
	printf("Here how to access an element we use *pointer + index number, * refers to dereferencing, for example let's access the second element: %i\n", *(p+1));
	printf("Here how to travers through the array just using pointer arithmetic: ");
	for (int i = 0; i < size; i++)
		printf("%i ", *(p+i));
	printf("\n");
	return(0);
}

