/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:10:55 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/29 18:05:57 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_loops(char a, char b, char c, char d);
void	ft_putchar(char a, char b, char c, char d);
void	ft_print_comb2(void);

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = a;
	d = b + 1;
	ft_loops(a, b, c, d);
}

void	ft_loops(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if (a != c || b != d)
						ft_putchar(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_putchar(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write (1, ", ", 2);
}
