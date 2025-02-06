/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:39:04 by eerraoui          #+#    #+#             */
/*   Updated: 2025/02/05 19:56:20 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char a, char b, char c, char d);
void	ft_loop(char a, char b, char c, char d);

///*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
//*/

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = a;
	c = b;
	d = c + 1;
	ft_loop(a, b, c, d);
}

void	ft_putchar(char a, char b, char c, char d)
{
	if (a != c || b != d)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a != '9' || b != '8' || c != '9' || d != '9')
			write(1, ", ", 2);
	}
}

void	ft_loop(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (c > '9')
				c = '0';
			while (c <= '9')
			{
				if (d > '0')
					d = '0';
				while (d <= '9')
				{
					ft_putchar(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
			d = b + 1;
		}
		a++;
		c = a + 1;
	}
}
