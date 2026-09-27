/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiruela  <tiruela@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 13:36:58 by tiruela           #+#    #+#             */
/*   Updated: 2026/09/06 13:56:47 by tiruela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((j == 0 && i == 0) || (j == 0 && i == y - 1))
				ft_putchar('A');
			else if ((j == x - 1 && i == 0) || (j == x - 1 && i == y - 1))
				ft_putchar('C');
			else if (i == 0 || i == y - 1)
				ft_putchar('B');
			else if (j == 0 || j == x - 1)
				ft_putchar ('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
