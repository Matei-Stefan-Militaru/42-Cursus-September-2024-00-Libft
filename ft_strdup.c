/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:44:53 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/25 18:50:35 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

/*
void test_strdup(char *str)
{
    char *dup = ft_strdup(str);
    char *orig_dup = strdup(str);

    printf("Original: \"%s\"\n", str);
    printf("ft_strdup: \"%s\"\n", dup);
    printf("strdup:    \"%s\"\n", orig_dup);
    
    printf("Comparación: %s\n", strcmp(dup, orig_dup) 
    == 0 ? "IGUALES" : "DIFERENTES");
    
    printf("-------------------\n");

    free(dup);
    free(orig_dup);
}

int main(void)
{
    printf("TEST FT_STRDUP\n");
    printf("==============\n\n");

    // Caso 1: Cadena normal
    test_strdup("Hola, mundo!");

    // Caso 2: Cadena vacía
    test_strdup("");

    // Caso 3: Cadena con caracteres especiales
    test_strdup("!@#$%^&*()_+");

    // Caso 4: Cadena larga
    test_strdup("Esta es una cadena muy larga para probar si 
    ft_strdup funciona correctamente con cadenas de mayor longitud.");

    // Caso 5: Cadena con espacios
    test_strdup("   Espacios   al   inicio   y   al   final   ");

    return (0);
}
*/
