/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:14:46 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/05 16:16:14 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int main(void)
include <string.h>
include <stdio.h>
{
	printf("Test 1:\n");
	printf("  ft_strstr: %s\n", ft_strstr("Hello World", "Wodrld"));
	printf("  strstr:    %s\n", strstr("Hello World", "Wordld"));

    return (0);
}*/
