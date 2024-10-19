/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_29.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:15:04 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 20:15:10 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strmapi(const char *str, char (*f)(unsigned int, char),
	const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Original string: \"%s\"\n", str);
	result = ft_strmapi(str, f);
	if (result)
	{
		printf("Modified string: \"%s\"\n", result);
		free(result);
	}
	else
	{
		printf("Error: NULL returned\n");
	}
	printf("===========================\n");
}

char	to_upper(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	printf("Testing ft_strmapi function\n");
	test_strmapi("hello world", to_upper, "Convert lowercase to uppercase");
	test_strmapi("42Barcelona", to_upper, "String with numbers and letters");
	test_strmapi("", to_upper, "Empty string");
	test_strmapi("NoChangeHere", to_upper, "String with no lowercase letters");
	printf("\nAll tests completed.\n");
	return (0);
}
