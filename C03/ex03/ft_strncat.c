/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 09:26:52 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/05 09:26:58 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
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
	printf(" ft_strncat: %s\n", ft_strncat(src, dest, 3));
	printf(" strncat: %s\n", strncat(src, dest, 3));

    return (0);
    
    include <string.h>
    include <stdio.h>

}*/
