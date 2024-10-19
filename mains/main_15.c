/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_15.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:39:43 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:39:49 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strchr(const char *s, int c, const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Input string: \"%s\"\n", s);
	printf("Character to find: '%c' (ASCII: %d)\n", c, c);
	result = ft_strchr(s, c);
	if (result)
		printf("Output: Found at position: %ld\n", result - s);
	else
		printf("Output: Character not found.\n");
	printf("===========================\n");
}

static void	run_strchr_tests(void)
{
	test_strchr("Hello, World!", 'o', "Basic test (character present)");
	test_strchr("Hello, World!", 'x', "Character not present");
	test_strchr("Hello, World!", '\0', "Null terminator");
	test_strchr("", 'a', "Empty string");
	test_strchr("Sample string", 'S', "Uppercase letter");
}

int	main(void)
{
	printf("Testing ft_strchr function\n\n");
	run_strchr_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
