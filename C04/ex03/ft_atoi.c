/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 11:05:05 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/07 11:05:13 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		str++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		str++;
	}
	return (res * sign);
}
/*#include <stdio.h>

int main(void)
{
	//char text[] = "12345";
		
	int mine = ft_atoi("12345");
	//int theirs = atoi("12345");
	
	printf("mine: %d\n", mine);
	//printf("theirs: %d\n", theirs);
	return (0);
		
		
}*/
