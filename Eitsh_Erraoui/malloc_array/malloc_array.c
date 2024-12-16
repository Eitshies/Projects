/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:46:58 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 12:47:15 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 5;
	int *p = (int *)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++)
	{
		*(p+i) = i + 1;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%i ", *(p+i));
	}
	printf("\n");
	return(0);
}

