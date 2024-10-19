/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_17.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:51:02 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:51:11 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strncmp(const char *s1, const char *s2, size_t n,
	const char *test_name)
{
	int	result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Comparing: \"%s\" and \"%s\" with n = %zu\n", s1, s2, n);
	result = ft_strncmp(s1, s2, n);
	if (result < 0)
		printf("Output: \"%s\" is less than \"%s\"\n", s1, s2);
	else if (result > 0)
		printf("Output: \"%s\" is greater than \"%s\"\n", s1, s2);
	else
		printf("Output: Strings are equal up to %zu characters.\n", n);
	printf("===========================\n");
}

static void	run_strncmp_tests(void)
{
	test_strncmp("Hello", "Hello, World!", 5, "Basic equality test");
	test_strncmp("Hello", "Hello, World!", 10,
		"Equality with extra characters");
	test_strncmp("Hello", "Hella", 5, "Different characters");
	test_strncmp("Hello", "Hello", 5, "Exact match");
	test_strncmp("Hello", "Hell", 5, "Shorter second string");
	test_strncmp("abc", "abc", 0, "Zero length comparison");
	test_strncmp("abc", "abcd", 3, "Equal up to n characters");
}

int	main(void)
{
	printf("Testing ft_strncmp function\n\n");
	run_strncmp_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
