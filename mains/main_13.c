/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_13.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:35:02 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:35:07 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_toupper(int c, const char *test_name)
{
	int	return_value;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Input character: '%c' (ASCII: %d)\n", c, c);
	return_value = ft_toupper(c);
	printf("Output character: '%c' (ASCII: %d)\n", return_value, return_value);
	printf("===========================\n");
}

static void	run_toupper_tests(void)
{
	test_toupper('a', "Lowercase letter");
	test_toupper('z', "Lowercase letter");
	test_toupper('A', "Uppercase letter (no change)");
	test_toupper('Z', "Uppercase letter (no change)");
	test_toupper('1', "Numeric character");
	test_toupper('!', "Special character");
	test_toupper('\0', "Null character");
}

int	main(void)
{
	printf("Testing ft_toupper function\n\n");
	run_toupper_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
