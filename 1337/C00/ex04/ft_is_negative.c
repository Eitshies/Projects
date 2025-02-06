/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 00:11:32 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/20 00:29:47 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

/*
int	main(void)
{
	int	n;

	n = 10;
	ft_is_negative(n);
	return (0);
}
*/

void	ft_is_negative(int n)
{
	char	isp;
	char	isn;

	isp = 'P';
	isn = 'N';
	if (n >= 0)
		write (1, &isp, 1);
	else
		write (1, &isn, 1);
}
