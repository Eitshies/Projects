/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 00:04:25 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/27 14:08:24 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7' || b != '8' || c != '9')
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
