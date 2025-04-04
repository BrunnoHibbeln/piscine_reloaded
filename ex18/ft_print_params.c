/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:45:04 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/04 17:13:21 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

int	main(int c, char *v[])
{
	int	i;
	int	j;

	i = 1;
	if (c < 2)
		return (0);
	while (i < c)
	{
		j = 0;
		while (v[i][j])
			ft_putchar(v[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
