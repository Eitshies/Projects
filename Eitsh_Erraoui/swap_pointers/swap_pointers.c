/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pointers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:22:28 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 16:57:36 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void swaperz(int *a, int *b);

int main(void)
{
	int a = 18;
	int b = 49;
	printf("Before swapping: a = %i and b = %i.\n", a, b);
	swaperz(&a, &b);
	printf("After swapping: a = %i and b = %i.\n", a, b);
	return(0);
}

void swaperz(int *a, int *b)
{
/*
	*a += *b;
	*b = *a - *b;
	*a -= *b;
*/
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

