/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:23:58 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/03 20:23:58 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = (a % b);
	*div = (a / b);
}

int	main(void)
{
	int a = 2;
	int b = 10;
	int div = 0;
	int mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d mod: %d", div, mod);
}