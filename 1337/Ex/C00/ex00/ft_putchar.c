/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:28:22 by eerraoui          #+#    #+#             */
/*   Updated: 2025/02/03 18:31:26 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
int	main(void)
{
	char	c;

	c = 'a';
	ft_putchar(c);
	return (0);
}
*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
