/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:25:29 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/05 15:25:32 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
void ft_putstr(char *str)
{
    if (str)
        write(1, str, ft_strlen(str));
}

void ft_putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(void)
{
    const char *str = "Hello, World!";
    char *substr;
    
    // Caso 1: Extraer una subcadena del medio
    ft_putstr("Subcadena 1: ");
    substr = ft_substr(str, 7, 5);
    ft_putstr(substr);
    write(1, "\n", 1);
    free(substr);
    
    // Caso 2: Extraer desde el principio
    ft_putstr("Subcadena 2: ");
    substr = ft_substr(str, 0, 5);
    ft_putstr(substr);
    write(1, "\n", 1);
    free(substr);
    
    // Caso 3: Extraer hasta el final
    ft_putstr("Subcadena 3: ");
    substr = ft_substr(str, 7, 20);
    ft_putstr(substr);
    write(1, "\n", 1);
    free(substr);
    
    // Caso 4: Inicio fuera de los límites
    ft_putstr("Subcadena 4: ");
    substr = ft_substr(str, 20, 5);
    ft_putstr(substr);
    write(1, "\n", 1);
    free(substr);
    
    // Caso 5: Cadena vacía
    ft_putstr("Subcadena 5: ");
    substr = ft_substr("", 0, 5);
    ft_putstr(substr);
    write(1, "\n", 1);
    free(substr);
    
    // Caso 6: NULL como entrada
    ft_putstr("Subcadena 6: ");
    substr = ft_substr(NULL, 0, 5);
    if (substr == NULL)
        ft_putstr("NULL (como se esperaba)");
    else
        free(substr);
    write(1, "\n", 1);

    return 0;
}
*/
