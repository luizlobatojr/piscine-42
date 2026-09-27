/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:33:37 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/02 12:27:07 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*int main(void)
{
	int a = 1;
	int b = 2;
	char ca;
	char cb;
	
	ft_swap(&a , &b);
	// converte o int para caractere somando a '0'
	ca = a + '0';
	cb = b + '0';
	
	write(1, &ca, 1);
	write(1, &cb, 1);
	return(0);
}*/
