/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_23.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:51:08 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 17:51:10 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strdup(const char *src, const char *test_name)
{
	char	*dup;

	printf("\n=== Test: %s ===\n", test_name);
	dup = ft_strdup(src);
	if (dup == NULL)
	{
		printf("String duplication failed.\n");
		return ;
	}
	printf("Original string: \"%s\"\n", src);
	printf("Duplicated string: \"%s\"\n", dup);
	free(dup);
	printf("===========================\n");
}

static void	run_strdup_tests(void)
{
	test_strdup("Hello, World!", "Duplicate a simple string");
	test_strdup("42 Barcelona", "Duplicate a string with numbers");
	test_strdup("", "Duplicate an empty string");
	test_strdup("Another test case!",
		"Duplicate a string with special characters: @#&*");
}

int	main(void)
{
	printf("Testing ft_strdup function\n\n");
	run_strdup_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
