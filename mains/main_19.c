/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_19.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:59:50 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:59:52 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_memcmp(const void *s1, const void *s2, size_t n,
	const char *test_name)
{
	int	result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Comparing:\n");
	printf("s1: \"%s\"\n", (char *)s1);
	printf("s2: \"%s\"\n", (char *)s2);
	result = ft_memcmp(s1, s2, n);
	printf("Result: %d\n", result);
	printf("===========================\n");
}

static void	run_memcmp_tests(void)
{
	char	str1[20];
	char	str2[20];
	char	str3[20];

	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	ft_memset(str3, 0, sizeof(str3));
	ft_memcpy(str1, "Hello, World!", 14);
	ft_memcpy(str2, "Hello, World!", 14);
	ft_memcpy(str3, "Hello, friend!", 14);
	test_memcmp(str1, str2, sizeof(str1), "Identical strings");
	test_memcmp(str1, str3, sizeof(str1), "Different strings");
	test_memcmp(str1, str1, sizeof(str1), "Self comparison");
	test_memcmp(str1, str2, 7, "Partial comparison (7, equal)");
	test_memcmp(str1, str3, 5, "Partial comparison (5, different)");
}

int	main(void)
{
	printf("Testing ft_memcmp function\n\n");
	run_memcmp_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
