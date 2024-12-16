/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_variables.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:45:53 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 12:45:58 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int *p1 = &a;
	int *p2 = &b;
	printf("Before swapping, a = %i, b = %i.\n", a, b);
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("After swapping, a = %i, b = %i.\n", a, b);
	return(0);
}

