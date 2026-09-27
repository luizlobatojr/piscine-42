/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 10:05:31 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/08 10:05:35 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(int argc, char *argv[])
{	
	(void) argc;
	(void) argv;
	char c = 'a';
	write(1, "Hello World", 11);
	
	ft_putchar(c);
	return(0);
}*/
