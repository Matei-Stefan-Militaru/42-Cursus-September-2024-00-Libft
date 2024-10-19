/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_26.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:08:21 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 18:08:24 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strtrim(char const *s1, char const *set, const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	result = ft_strtrim(s1, set);
	if (result == NULL)
	{
		printf("Trimming failed.\n");
		return ;
	}
	printf("Original string: \"%s\"\n", s1);
	printf("Set characters: \"%s\"\n", set);
	printf("Trimmed string: \"%s\"\n", result);
	free(result);
	printf("===========================\n");
}

static void	run_strtrim_tests(void)
{
	test_strtrim("   Hello, World!   ", " ", "Trim spaces");
	test_strtrim("***Hello***", "*", "Trim asterisks");
	test_strtrim("abcde", "xyz", "No characters to trim");
	test_strtrim("!!!Wow!!!", "!", "Trim exclamation marks");
	test_strtrim("  Trim   ", " ", "Trim spaces on both sides");
}

int	main(void)
{
	printf("Testing ft_strtrim function\n\n");
	run_strtrim_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
