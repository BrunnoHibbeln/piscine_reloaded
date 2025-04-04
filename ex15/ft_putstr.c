/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:22:38 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/04 14:26:21 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
/* 
int	main(void)
{
	char str[] = "ababab";
	ft_putstr(str);
} */
