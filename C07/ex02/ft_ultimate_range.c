/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:38:00 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/15 13:38:04 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		size;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
/*
int	main(void)
{
	int *array;
	int size;
	int i;
	
	size = ft_ultimate_range(&array, 2, 9);
	printf("tamanho retornado %d:\n", size);
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			printf("arr[%d] = %d\n", i, array[i]);
			i++;		
		}
	}
	free(array);
	return (0);
}*/
