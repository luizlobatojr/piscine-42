/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:51:03 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/03 11:22:04 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	unsigned int n = 2;
	char dest[5];
	char src[] = "luiz";
	
	write(1, "antes:\n", 7);
	write(1, &src, 4);
	
	ft_strncpy(dest, src, n);

        write(1, "depois:\n", 8);
	write(1, &dest, 4);
	
	return (0);
}*/
