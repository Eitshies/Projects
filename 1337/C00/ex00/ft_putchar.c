/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 22:52:06 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/19 23:45:31 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
int	main(void)
{
	ft_putchar('h');
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
