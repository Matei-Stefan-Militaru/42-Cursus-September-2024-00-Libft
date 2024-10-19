/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_14.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:36:45 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:36:47 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_tolower(int c, const char *test_name)
{
	int	return_value;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Input character: '%c' (ASCII: %d)\n", c, c);
	return_value = ft_tolower(c);
	printf("Output character: '%c' (ASCII: %d)\n", return_value, return_value);
	printf("===========================\n");
}

static void	run_tolower_tests(void)
{
	test_tolower('A', "Uppercase letter");
	test_tolower('Z', "Uppercase letter");
	test_tolower('a', "Lowercase letter (no change)");
	test_tolower('z', "Lowercase letter (no change)");
	test_tolower('1', "Numeric character");
	test_tolower('!', "Special character");
	test_tolower('\0', "Null character");
}

int	main(void)
{
	printf("Testing ft_tolower function\n\n");
	run_tolower_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
