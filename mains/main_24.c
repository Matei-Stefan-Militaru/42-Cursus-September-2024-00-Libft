/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_24.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:53:51 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 17:53:56 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_substr(char const *s, unsigned int start,
	size_t len, const char *test_name)
{
	char	*substr;

	printf("\n=== Test: %s ===\n", test_name);
	substr = ft_substr(s, start, len);
	if (substr == NULL)
	{
		printf("Substr extraction failed.\n");
		return ;
	}
	printf("Original string: \"%s\"\n", s);
	printf("Extracted substring: \"%s\"\n", substr);
	free(substr);
	printf("===========================\n");
}

static void	run_substr_tests(void)
{
	test_substr("Hello, World!", 0, 5, "Extract from start");
	test_substr("Hello, World!", 7, 5, "Extract from middle");
	test_substr("Hello, World!", 7, 20,
		"Extract with length greater than remaining string");
	test_substr("Hello, World!", 15, 5, "Extract beyond string length");
	test_substr("42 Barcelona", 0, 2, "Extract first two characters");
	test_substr("", 0, 5, "Extract from empty string");
}

int	main(void)
{
	printf("Testing ft_substr function\n\n");
	run_substr_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
