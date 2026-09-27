/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_utils.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/19 16:34:34 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/09/19 16:35:19 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	ret;

	i = 0;
	signal = 1;
	ret = 0;
	while ((str[i] == ' ') || (str[i] >= '\a' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signal *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (ret * signal);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && (*s1 == *s2) && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (*str)
	{
		str_len++;
		str++;
	}
	return (str_len);
}

int	is_space(char *c)
{
	return (*c == ' ' || *c == '\f' || *c == '\n'
		|| *c == '\r' || *c == '\t' || *c == '\v');
}

int	ft_trim(char *str, char *charset)
{
	return (0);
}
