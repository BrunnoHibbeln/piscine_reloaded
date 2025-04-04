/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:56:04 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/04 17:13:09 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_args_swap(char **arg1, char **arg2)
{
	char	*temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int	ft_args_cmp(char *arg1, char *arg2)
{
	int	i;

	i = 0;
	while ((arg1[i] != '\0') || (arg2[i] != '\0'))
	{
		if (arg1[i] != arg2[i])
		{
			if ((arg1[i] > arg2[i]) || (arg1[i] < arg2[i]))
				return (arg1[i] - arg2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_args_check(int argc, char *argv[])
{
	int	i;
	int	current;
	int	next;

	current = 1;
	next = current + 1;
	i = 1;
	while (i < argc)
	{
		current = 1;
		next = current + 1;
		while (next < argc)
		{
			if ((ft_args_cmp(argv[current], argv[next])) > 0)
				ft_args_swap(&argv[current], &argv[next]);
			current++;
			next++;
		}
		i++;
	}
}

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_args_check(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
