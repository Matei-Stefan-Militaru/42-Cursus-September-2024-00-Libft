/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:51:18 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 13:01:33 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	print_memory(void *mem, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = mem;
	i = 0;
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

static void	test_memmove(void *dest, void *src, size_t n,
		const char *test_name)
{
	void	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Before ft_memmove:\n");
	printf("Source: ");
	print_memory(src, n);
	printf("Destination: ");
	print_memory(dest, n);
	result = ft_memmove(dest, src, n);
	printf("After ft_memmove:\n");
	printf("Result address: %p (should be %p)\n", result, dest);
	printf("Destination: ");
	print_memory(dest, n);
	printf("===========================\n");
}

static void	run_string_tests(void)
{
	char	str1[20];
	char	str2[20];

	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	ft_memcpy(str1, "Hello, World!", 10);
	test_memmove(str2, str1, strlen(str1) + 1, "Basic string copy");
	test_memmove(str1 + 2, str1, 5, "Overlapping memory (forward)");
	strcpy(str1, "Hello, World!");
	test_memmove(str1, str1 + 2, 5, "Overlapping memory (backward)");
}

static void	run_int_and_edge_tests(void)
{
	int		arr1[5];
	int		arr2[5];
	void	*result;
	int		i;

	i = 0;
	ft_memset(arr1, 0, sizeof(arr1));
	ft_memset(arr2, 0, sizeof(arr2));
	while (i < 5)
	{
		arr1[i] = i + 1;
		i++;
	}
	test_memmove(arr2, arr1, sizeof(arr1), "Integer array copy");
	test_memmove(arr2, arr1, 0, "Zero-length copy");
	result = ft_memmove(NULL, NULL, 5);
	printf("\n=== Test: NULL pointers ===\n");
	printf("Result: %p (should be NULL)\n", result);
}

int	main(void)
{
	printf("Testing ft_memmove function\n\n");
	run_string_tests();
	run_int_and_edge_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
