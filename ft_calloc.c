/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 01:41:15 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/12 01:55:03 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void				*ptr;
	unsigned char		*byte_ptr;
	size_t				total_size;
	size_t				i;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(size_t n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	print_memory(void *ptr, size_t size)
{
	unsigned char	*bytes;
	size_t			i;

	bytes = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		if (bytes[i] == 0)
			ft_putstr("00 ");
		else
		{
			ft_putnbr(bytes[i]);
			ft_putstr(" ");
		}
		i++;
	}
	ft_putstr("\n");
}

void	test_calloc(size_t nmemb, size_t size, char *test_name)
{
	void	*ptr;
	size_t	total_size;

	ft_putstr("\nTest ");
	ft_putstr(test_name);
	ft_putstr(":\n");
	ft_putstr("Solicitando memoria para ");
	ft_putnbr(nmemb);
	ft_putstr(" elementos de tamaño ");
	ft_putnbr(size);
	ft_putstr(" bytes\n");

	ptr = ft_calloc(nmemb, size);
	total_size = nmemb * size;

	if (ptr)
	{
		ft_putstr("Memoria asignada correctamente\n");
		ft_putstr("Contenido (debería ser todo ceros):\n");
		print_memory(ptr, total_size);
		free(ptr);
	}
	else
		ft_putstr("Error en la asignación de memoria\n");
	ft_putstr("---------------\n");
}

int	main(void)
{
	ft_putstr("TEST FT_CALLOC\n");
	ft_putstr("=============\n");

	// Test 1: Asignación normal 
	test_calloc(5, sizeof(int), "asignación normal");

	// Test 2: Asignación de array pequeño  
	test_calloc(10, sizeof(char), "array pequeño");

	// Test 3: Asignación de tamaño 0  
	test_calloc(0, sizeof(int), "tamaño cero");

	// Test 4: Asignación grande  
	test_calloc(1000, sizeof(char), "asignación grande");

	// Test 5: Elemento de tamaño 0  
	test_calloc(5, 0, "tamaño de elemento cero");

	return (0);
}
*/
