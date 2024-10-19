/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_21.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:15:55 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 17:15:58 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_atoi(const char *str, const char *test_name)
{
	int	result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Input string: \"%s\"\n", str);
	result = ft_atoi(str);
	printf("Converted integer: %d\n", result);
	printf("===========================\n");
}

static void	run_atoi_tests(void)
{
	test_atoi("42", "Basic positive number");
	test_atoi("-42", "Negative number");
	test_atoi("   42", "Leading whitespace");
	test_atoi("42abc", "Trailing characters");
	test_atoi("   -42abc", "Negative with trailing characters");
	test_atoi("  +42", "Positive with plus sign");
	test_atoi("  +0", "Zero with plus sign");
	test_atoi("2147483647", "Max int value");
	test_atoi("-2147483648", "Min int value");
	test_atoi("  ", "Only whitespace");
	test_atoi("--+-42", "Various signs");
}

int	main(void)
{
	printf("Testing ft_atoi function\n\n");
	run_atoi_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
