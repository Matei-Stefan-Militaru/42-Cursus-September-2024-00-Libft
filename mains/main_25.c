/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_25.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:56:16 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 17:56:19 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_strjoin(char const *s1, char const *s2, const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	result = ft_strjoin(s1, s2);
	if (result == NULL)
	{
		printf("String joining failed.\n");
		return ;
	}
	printf("s1: \"%s\"\n", s1);
	printf("s2: \"%s\"\n", s2);
	printf("Joined string: \"%s\"\n", result);
	free(result);
	printf("===========================\n");
}

static void	run_strjoin_tests(void)
{
	test_strjoin("Hello, ", "World!", "Basic join");
	test_strjoin("42 ", "Barcelona", "Join with a space");
	test_strjoin("", "Only second", "Join with empty first");
	test_strjoin("Only first", "", "Join with empty second");
	test_strjoin("", "", "Join with both empty");
}

int	main(void)
{
	printf("Testing ft_strjoin function\n\n");
	run_strjoin_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
