/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:40:11 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/30 06:39:17 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "Hola, mundo. Bienvenido al mundo de la programación en C.";
    const char *needle = "mundo";
    size_t max_len = 15; // Limitar la búsqueda a los primeros 15 caracteres de haystack

    char *result = strnstr(haystack, needle, max_len);

    if (result) {
        printf("Se encontró '%s' en los primeros %zu caracteres de '%s'\n", needle, max_len, haystack);
    } else {
        printf("'%s' no se encontró en los primeros %zu caracteres de '%s'\n", needle, max_len, haystack);
    }

    return 0;
}