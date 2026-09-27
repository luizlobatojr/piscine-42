/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 20:35:28 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/04 20:35:34 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int main(void)
{
	char src[50] = "Hello World";
	char dest[50] = "Hllo World";
	
	printf("Test:\n");
	printf(" ft_strncmp: %d\n", ft_strncmp(src, dest, 3));
	printf(" strncmp: %d\n", strncmp(src, dest, 3));

    return (0);
	include <string.h>
	include <stdio.h>


}*/
