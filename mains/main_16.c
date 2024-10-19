/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:48:46 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:48:51 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strrchr(const char *s, int c, const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Input string: \"%s\"\n", s);
	printf("Character to find: '%c' (ASCII: %d)\n", c, c);
	result = ft_strrchr(s, c);
	if (result)
		printf("Output: Found at position: %ld\n", result - s);
	else
		printf("Output: Character not found.\n");
	printf("===========================\n");
}

static void	run_strrchr_tests(void)
{
	test_strrchr("Hello, World!", 'o', "Basic test (character present)");
	test_strrchr("Hello, World!", 'x', "Character not present");
	test_strrchr("Hello, World!", '\0', "Null terminator");
	test_strrchr("", 'a', "Empty string");
	test_strrchr("Sample string", 'S', "Uppercase letter");
	test_strrchr("Multiple occurrences: a, b, c, a", 'a',
		"Last occurrence of character");
}

int	main(void)
{
	printf("Testing ft_strrchr function\n\n");
	run_strrchr_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
