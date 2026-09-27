/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 20:47:50 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/04 21:14:56 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main(void)
{
	char src[50] = "Hello World";
	char dest[50] = "Hello World";
	
	printf("Test:\n");
	printf(" ft_strcat: %s\n", ft_strcat(src, dest));
	printf(" strcat: %s\n", strcat(src, dest));

    return (0);
    
include <string.h>
include <stdio.h>

}*/
