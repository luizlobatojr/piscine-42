/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:28:24 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/21 11:52:40 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	free_all(int i, t_stock_str *data)
{
	while (i >= 0)
	{
		free(data[i].copy);
		i--;
	}
	free(data);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*data;

	data = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!data)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		data[i].str = av[i];
		data[i].size = ft_strlen(av[i]);
		data[i].copy = ft_strdup(av[i]);
		if (!data[i].copy)
		{
			free_all(i, data);
			return (NULL);
		}
		i++;
	}
	data[i].str = NULL;
	return (data);
}
/*
int	 main(int ac, char **av)
{
	t_stock_str	*data;
	int		i;

	data = ft_strs_to_tab(ac - 1, av + 1);
	if (!data)
		return (1);
	i = 0;
	while (data[i].str)
	{
		printf("str: %s\n",data[i].str);
		printf("size: %d\n",data[i].size);
		printf("copy: %s\n",data[i].copy);
		printf("\n");
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
}*/
