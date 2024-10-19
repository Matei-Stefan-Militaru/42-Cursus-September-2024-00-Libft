/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_18.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:54:42 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 16:54:43 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_memchr(const void *s, int c, size_t n, const char *test_name)
{
	void	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Searching for character: '%c' in string: \"%s\"\n", c, (char *)s);
	result = ft_memchr(s, c, n);
	if (result != NULL)
	{
		printf("Output: Found '%c' at position: %ld\n",
			*(unsigned char *)result,
			(unsigned char *)result - (unsigned char *)s);
	}
	else
	{
		printf("Output: Character '%c' not found in the first %zu bytes.\n",
			c, n);
	}
	printf("===========================\n");
}

static void	run_memchr_tests(void)
{
	char	str1[20];
	char	str2[20];
	char	str3[20];

	ft_memset(str1, 0, sizeof(str1));
	ft_memset(str2, 0, sizeof(str2));
	ft_memset(str3, 0, sizeof(str3));
	ft_memcpy(str1, "Hello, World!", 14);
	ft_memcpy(str2, "abcdefg", 8);
	ft_memcpy(str3, "", 1);
	test_memchr(str1, 'W', sizeof(str1), "Basic character search");
	test_memchr(str1, 'z', sizeof(str1), "Character not in string");
	test_memchr(str2, 'c', sizeof(str2), "Middle character search");
	test_memchr(str2, 'a', sizeof(str2), "First character search");
	test_memchr(str2, 'g', sizeof(str2), "Last character search");
	test_memchr(str3, 'a', sizeof(str3), "Empty string search");
}

int	main(void)
{
	printf("Testing ft_memchr function\n\n");
	run_memchr_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
