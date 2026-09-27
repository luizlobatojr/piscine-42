/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:40:44 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/06 17:40:47 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char src[20] = "ABC";
	char dest[] = "DEF";
	printf("Test:\n");
	size_t result = printf(" ft_strlcat: %u\n", ft_strlcat(src, dest, 
	sizeof(dest)));
	
	unsigned int x = 0;
	x = ft_strlcat(src, dest, 10);
	
	//size_t resultado printf(" strlcat: %u\n", 
	//strlcp(src, dest, sizeof(dest)));

    if (result >= sizeof(dest)) {
        printf("Aviso: A string foi truncada! Tamanho necessário:%zu   
        [%d]\n", result, x);
    } 
    else 
    {
        printf("Concatenação bem-sucedida.\n");
    }

    return 0;
}*/
