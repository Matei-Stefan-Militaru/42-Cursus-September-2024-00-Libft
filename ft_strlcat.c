/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:40:46 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 13:06:12 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
void	ft_putnbr(size_t n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	print_string(const char *prefix, const char *str)
{
	write(1, prefix, ft_strlen(prefix));
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int	main(void)
{
	char		dest1[50];
	char		dest2[10];
	const char	*src1;
	const char	*src2;
	size_t		result;


	// Caso 1
	ft_strlcat(dest1, "Hola,", sizeof(dest1));
	src1 = "mundo!";
	print_string("Estado inicial dest1: ", dest1);
	print_string("Source a concatenar: ", src1);
	result = ft_strlcat(dest1, src1, sizeof(dest1));
	print_string("Resultado final: ", dest1);
	write(1, "Valor retornado: ", 16);
	ft_putnbr(result);
	write(1, "\n\n", 2);
	// Caso 2
	ft_strlcat(dest2, "Hola", sizeof(dest2));
	src2 = ", mundo!";
	print_string("Estado inicial dest2: ", dest2);
	print_string("Source a concatenar: ", src2);
	result = ft_strlcat(dest2, src2, sizeof(dest2));
	print_string("Resultado final: ", dest2);
	write(1, "Valor retornado: ", 16);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
*/
