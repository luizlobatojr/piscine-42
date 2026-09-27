/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 20:20:31 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/20 20:20:33 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(table[i] + '0');
		i++;
	}
	if (table[0] != 10 - n)
		write(1, ", ", 2);
}

void	gen_combn(int *table, int pos, int n)
{
	int	d;

	if (pos == n)
	{
		print_comb(table, n);
		return ;
	}
	d = 0;
	if (pos > 0)
	{
		d = table[pos - 1] + 1;
	}
	while (d <= 9)
	{
		table[pos] = d;
		gen_combn(table, pos + 1, n);
		d++;
	}
}

void	ft_print_combn(int n)
{
	int	table[10];

	if (n <= 0 || n >= 10)
		return ;
	gen_combn(table, 0, n);
}
/*
int	main(void)
{
	ft_print_combn(8);
	return (0);
}*/
