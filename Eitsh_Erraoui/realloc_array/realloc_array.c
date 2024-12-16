/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:47:28 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 12:47:42 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int old = 5;
	int new = 10;
	int *p = (int *)malloc(old * sizeof(int));
	printf("Before resizing: ");
	for(int i = 0; i < old; i++)
	{
		*(p+i) = i + 1;
		printf("%i ", *(p+i));
	}
	printf("\nAfter resizing: ");
	p = (int *)realloc(p, new * sizeof(int));
	for(int i = 0; i < new; i++)
	{
		if(i >= old)
			*(p+i) = i + 1;
		printf("%i ", *(p+i));
	}
	printf("\n");
	return(0);
}

