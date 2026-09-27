/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 08:44:26 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/03 10:48:09 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
	char src[] = "Luiz";
	char dest[4];

	write(1, "antes: ", 7);
	write(1, &src, 4);
	
	ft_strcpy(dest, src);

        write(1, "depois: ", 8);
	write(1, &dest, 4);

	return(0);
}*/
