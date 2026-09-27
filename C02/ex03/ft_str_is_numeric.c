/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:24:10 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/21 18:24:19 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	 main()
{
	char str[] = "12345887";

	char result = ft_str_is_numeric(str);

	if (result == 1)
	{
		write(1, "1", 1);
	}
	else 
	{
		write(1, "0", 1);
	}

	return(0);
}*/
