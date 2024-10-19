/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_27.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:46:57 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 19:46:59 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	print_split_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		printf("Segment %d: \"%s\"\n", i + 1, result[i]);
		i++;
	}
}

static void	test_split(const char *str, char delimiter, const char *test_name)
{
	char	**result;
	int		i;

	printf("\n=== Test: %s ===\n", test_name);
	printf("String: \"%s\"\n", str);
	printf("Delimiter: '%c'\n", delimiter);
	result = ft_split(str, delimiter);
	if (result)
	{
		print_split_result(result);
		i = 0;
		while (result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Error: NULL returned\n");
	}
	printf("===========================\n");
}

int	main(void)
{
	printf("Testing ft_split function\n");
	test_split("Hello World This Is C", ' ', "Basic split with space");
	test_split("42Barcelona", 'a', "Split with letter 'a'");
	test_split("apple,,banana,,cherry", ',',
		"Split with consecutive delimiters");
	test_split("", ' ', "Empty string");
	test_split("NoDelimitersHere", ',', "String with no delimiters");
	printf("\nAll tests completed.\n");
	return (0);
}
