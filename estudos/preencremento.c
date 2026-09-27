/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preencremento.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 11:33:31 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/18 11:33:39 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int a = 5;
    int b;

    // PRÉ-INCREMENTO (++a)
    // 1. O 'a' passa de 5 para 6
    // 2. O novo valor (6) é atribuído a 'b' 

    printf("Pre-incremento:\n");
    printf("Valor de a: %d\n", ++a); // Resultado: 6
    printf("Valor de b: %d\n", a); // Resultado: 6

    return 0;
}
