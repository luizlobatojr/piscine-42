/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:30:29 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/02 15:30:20 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{	
	int a = 4;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b , &div, &mod);

	printf("Divisor: %d e Resto %d\n", a, b);
	printf("Resultado Divisor: %d\n", div);
	printf("Resultado Resto %d\n", mod);

	return(0);
}*/
