/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_20.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:04:57 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 17:05:00 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strnstr(const char *big, const char *little, size_t len,
	const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Searching in: \"%s\"\n", big);
	printf("For: \"%s\"\n", little);
	result = ft_strnstr(big, little, len);
	if (result)
		printf("Found at: \"%s\"\n", result);
	else
		printf("Not found\n");
	printf("===========================\n");
}

static void	run_strnstr_tests(void)
{
	char	big1[20];
	char	little1[20];
	char	little2[20];
	char	little3[20];

	ft_memset(big1, 0, sizeof(big1));
	ft_memcpy(big1, "Hello, World!", 14);
	ft_memset(little1, 0, sizeof(little1));
	ft_memcpy(little1, "World", 14);
	ft_memset(little2, 0, sizeof(little2));
	ft_memcpy(little2, "Hello", 14);
	ft_memset(little3, 0, sizeof(little3));
	ft_memcpy(little3, "NotFound", 14);
	test_strnstr(big1, little1, sizeof(big1), "Basic substring");
	test_strnstr(big1, little2, sizeof(big1), "Substring at start");
	test_strnstr(big1, little3, sizeof(big1), "Non-existent substring");
}

static void	run_additional_tests(void)
{
	char	big1[20];
	char	little4[20];
	char	little5[20];
	char	big2[20];

	ft_memset(big1, 0, sizeof(big1));
	ft_memcpy(big1, "Hello, World!", 14);
	ft_memset(little4, 0, sizeof(little4));
	ft_memcpy(little4, "lo, W", 14);
	ft_memset(little5, 0, sizeof(little5));
	ft_memcpy(little5, "", 14);
	ft_memset(big2, 0, sizeof(big2));
	ft_memcpy(big2, "abcdeabcde", 14);
	test_strnstr(big1, little4, sizeof(big1), "Partial substring");
	test_strnstr(big1, little5, sizeof(big1), "Empty substring");
	test_strnstr(big2, little5, sizeof(big2),
		"Empty substring in another string");
}

int	main(void)
{
	printf("Testing ft_strnstr function\n\n");
	run_strnstr_tests();
	run_additional_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
