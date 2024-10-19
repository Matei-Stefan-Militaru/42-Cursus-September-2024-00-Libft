/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_11.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:20:58 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 14:21:01 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	print_memory(void *mem, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = mem;
	i = 0;
	if (size == 0)
	{
		printf("\n");
		return ;
	}
	if (p[0] == '\0')
	{
		printf("\n");
		return ;
	}
	while (i < size)
	{
		if (p[i] >= 32 && p[i] <= 126)
			printf("%c", p[i]);
		else
			printf(".");
		i++;
	}
	printf("\n");
}

static void	test_strlcpy(char *dest, const char *src, size_t size,
	const char *test_name)
{
	size_t	result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Before ft_strlcpy:\n");
	printf("Source: %s\n", src);
	printf("Destination: ");
	print_memory(dest, size);
	result = ft_strlcpy(dest, src, size);
	printf("\nAfter ft_strlcpy:\n");
	printf("Return value (source length): %zu\n", result);
	printf("Destination: ");
	print_memory(dest, size);
	printf("===========================\n");
}

static void	run_string_tests(void)
{
	char	str1[20];
	char	str2[20];

	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	test_strlcpy(str2, "Hello, World!", sizeof(str2), "Basic string copy");
	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	test_strlcpy(str1, "Hello, World!", 6, "Small destination buffer");
	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	test_strlcpy(str1, "Hello, World!", 0, "Zero-length buffer");
	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	test_strlcpy(str1, "", sizeof(str1), "Empty source string");
}

int	main(void)
{
	printf("\nTesting ft_strlcpy function\n\n");
	run_string_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
