/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 12:09:23 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/04 12:09:37 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main(void)
{
	char src[50] = "Hello World";
	char dest[50] = "Hllo World";
	
	printf("Test:\n");
	printf(" ft_strcmp: %d\n", ft_strcmp(src, dest));
	printf(" strcmp: %d\n", strcmp(src, dest));

    return (0);
    


}*/
