/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:20:53 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/03 15:50:26 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	 main()
{
	char str[] = "ABCDEF asdf?@12¶^:45";

	char result = ft_str_is_printable(str);

	if (result == 1)
	{
		write(1, &result, 1);
	}
	else 
	{
		write(1, "no print", 8);
	}

	return(0);
}*/
