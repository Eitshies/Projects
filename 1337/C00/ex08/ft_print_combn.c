/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:15:21 by eerraoui          #+#    #+#             */
/*   Updated: 2025/02/03 18:12:30 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

///*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
//*/

void	ft_print_combn(int n)
{
	char	a;
	char	b;

	a = '0';
	b = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			write (1, &a, 1);
			write (1, &b, 1);
			if (a != '8' || b != '9')
				write (1, ", ", 2);
			b++;
		}
		a++;
		b = '0' + n;
		n++;
	}
}
