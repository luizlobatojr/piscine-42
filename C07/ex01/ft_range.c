/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 18:00:14 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/13 18:00:19 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*range;
	int		size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main(void)
{
	int *tab;
	int min = 3;
	int max = 9;
	int size = max - min;
	int i;
	
	tab = ft_range(min, max);
		
	if (!tab)
	{
		printf("o return foi null\n");
		return (1);
	}
	i = 0;
	printf("valores no array %d %d\n", min , max);
	while (i < size)
	{
		if (i < size)
		{
			printf("tab[%d] = %d\n", i , tab[i]);
		}
		i++;

	}
	free(tab);

	return (0);
}*/
