/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:53:06 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/04 17:50:51 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long	high;
	long long	mid;
	long long	low;

	low = 0;
	high = nb;
	if (nb < 0)
		return (0);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if ((mid * mid) == nb)
			return (mid);
		if ((mid * mid) < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}
/* 
int	main(void)
{
	int nb = 2147395600;
	printf("%d", ft_sqrt(nb));
} */
