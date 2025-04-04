/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:41:46 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/04 16:01:56 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (arr = NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
/* 
int	main(void)
{
	int min = -5;
	int max = 5;
	int *result;
	
	result = ft_range(min, max);
	int i = 0;
	while (result[i] < max)
	{
		printf("%d: %d\n", i, result[i]);
		i++;
	}
} */
