/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:49:31 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/02 18:10:48 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_a;
	int	num_b;

	num_a = *a;
	num_b = *b;
	*a = num_a / num_b;
	*b = num_a % num_b;
}
/*
int main(void)
{
	int  a = 4;
	int  b = 2;

	ft_ultimate_div_mod(&a, &b);
	
	a = a + '0';
	b = b + '0';

	write(1, &a, 1);
	write(1, &b, 1 );
	return(0);
}*/
