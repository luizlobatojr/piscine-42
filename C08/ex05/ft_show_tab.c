/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 19:17:02 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/21 19:18:42 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	ft_putchar(c);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int	 main(int ac, char **av)
{
	t_stock_str	*data;
	int		i;
	
	if (ac < 2)
	{
		return (NULL);
	}
	data = ft_strs_to_tab(ac - 1, av + 1);
	if (!data)
		return (1);
	i = 0;
	while (data[i].str)
	{
		free(data[i].str);
		i++;
	}
	i = 0;
	while (data[i].str)
	{
		free(data[i].copy);
		i++;
	}
	free(data);
	return (0);
	cc -Wall -Wextra -Werror 
	../ex04/ft_strs_tab.c ft_show_tab main.c -o test 
}*/
