/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 01:30:09 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/12 01:33:26 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	print_memory(const unsigned char *mem, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (mem[i] >= 32 && mem[i] <= 126)
			write(1, &mem[i], 1);
		else
		{
			ft_putstr("0x");
			if (mem[i] < 16)
				write(1, "0", 1);
			ft_putnbr(mem[i]);
		}
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
}

void	test_memcmp(const void *s1, const void *s2, size_t n, char *test_name)
{
	int	result;

	ft_putstr("\nTest ");
	ft_putstr(test_name);
	ft_putstr(":\n");
	ft_putstr("Comparando:\n");
	ft_putstr("s1: ");
	print_memory(s1, n);
	ft_putstr("\ns2: ");
	print_memory(s2, n);
	ft_putstr("\nTamaño de comparación: ");
	ft_putnbr(n);
	ft_putstr("\n");
	
	result = ft_memcmp(s1, s2, n);
	
	ft_putstr("Resultado: ");
	ft_putnbr(result);
	if (result == 0)
		ft_putstr(" (Las memorias son iguales)");
	else if (result > 0)
		ft_putstr(" (s1 es mayor que s2)");
	else
		ft_putstr(" (s1 es menor que s2)");
	ft_putstr("\n---------------\n");
}

int	main(void)
{
	const char		*str1 = "Hello";
	const char		*str2 = "Hello";
	const char		*str3 = "Hella";
	unsigned char	bytes1[] = {1, 2, 3, 4, 5};
	unsigned char	bytes2[] = {1, 2, 4, 4, 5};
	
	ft_putstr("TEST FT_MEMCMP\n");
	ft_putstr("=============\n");

	// Test 1: Strings idénticos
	test_memcmp(str1, str2, 5, "strings idénticos");

	// Test 2: Strings diferentes 
	test_memcmp(str1, str3, 5, "strings diferentes");

	// Test 3: Arrays de bytes diferentes 
	test_memcmp(bytes1, bytes2, 5, "arrays de bytes diferentes");

	// Test 4: Comparación parcial (deberían ser iguales) 
	test_memcmp(bytes1, bytes2, 2, "comparación parcial");

	// Test 5: Comparación con n = 0 
	test_memcmp(str1, str3, 0, "comparación con n = 0");

	return (0);
}
*/
