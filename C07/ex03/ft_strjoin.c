/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:35:52 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/16 11:35:55 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void		ft_copy_sep(char *dest, char *sep, int *pos);
void		ft_copy(char *dest, char *src, int *pos);
char		*ft_strjoin(int size, char **strs, char *sep);
int			ft_len(int size, char **strs, char *sep);
int			ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		pos;
	char	*arr;

	if (size == 0)
	{
		arr = malloc(1);
		if (arr)
			arr[0] = '\0';
		return (arr);
	}
	arr = (char *)malloc(sizeof(char) * (ft_len(size, strs, sep) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < size)
	{
		ft_copy(arr, strs[i], &pos);
		if (i < size - 1)
			ft_copy_sep(arr, sep, &pos);
		i++;
	}
	arr[pos] = '\0';
	return (arr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	ft_copy(char *dest, char *src, int *pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*pos] = src[i];
		(*pos)++;
		i++;
	}
}

void	ft_copy_sep(char *dest, char *sep, int *pos)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dest[*pos] = sep[i];
		(*pos)++;
		i++;
	}
}
/*
int	main(void)
{	
	char *strs[] = {"Luiz", "Otavio", "ab"};
	char *sep = "---";
	int size = 3;	
	
	printf("%s\n", ft_strjoin(size, strs, sep));

	return (0);
}*/
