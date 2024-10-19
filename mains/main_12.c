/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:28:38 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:28:42 by mmilitar         ###   ########.fr       */
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

static void	test_strlcat(char *dest, const char *src, size_t size,
	const char *test_name)
{
	size_t	return_value;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Before ft_strlcat:\n");
	printf("Source: ");
	print_memory((void *)src, strlen(src) + 1);
	printf("Destination: ");
	print_memory((void *)dest, size);
	return_value = ft_strlcat(dest, src, size);
	printf("After ft_strlcat:\n");
	printf("Return value (source length): %zu\n", return_value);
	printf("Destination: ");
	print_memory((void *)dest, size);
	printf("===========================\n");
}

static void	run_string_tests(void)
{
	char	dest1[50];
	char	dest2[50];
	char	dest3[50];

	ft_memset(dest1, 0, sizeof(dest1));
	ft_memset(dest2, 0, sizeof(dest2));
	ft_memset(dest3, 0, sizeof(dest3));
	strcpy(dest1, "Hello, ");
	test_strlcat(dest1, "World!", sizeof(dest1), "Basic string concatenation");
	strcpy(dest2, "Hello, ");
	test_strlcat(dest2, "World!", 10, "Small destination buffer");
	strcpy(dest3, "Hello, ");
	test_strlcat(dest3, "World!", 0, "Zero-length buffer");
}

static void	run_edge_tests(void)
{
	char	dest[20];

	ft_memset(dest, 0, sizeof(dest));
	strcpy(dest, "Hello");
	test_strlcat(dest, " World!", sizeof(dest),
		"Concatenate with enough space");
	test_strlcat(dest, " This is a test.", sizeof(dest),
		"Concatenate exceeding buffer size");
}

int	main(void)
{
	printf("Testing ft_strlcat function\n\n");
	run_string_tests();
	run_edge_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
