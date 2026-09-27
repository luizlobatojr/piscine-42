/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 08:43:15 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/07 08:48:10 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (0);
	}
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "Estudando C";

	ft_strlen(str);
	printf("ft_strlen: %s\n", str);
	printf("strlen: %s\n", str);
	return (0);
}*/
