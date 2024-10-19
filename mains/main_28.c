/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_28.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:00:46 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 20:00:49 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_itoa(int number, const char *test_name)
{
	char	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Integer: %d\n", number);
	result = ft_itoa(number);
	if (result)
	{
		printf("Result: \"%s\"\n", result);
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
	printf("Testing ft_itoa function\n");
	test_itoa(123, "Basic positive integer");
	test_itoa(-123, "Basic negative integer");
	test_itoa(0, "Zero");
	test_itoa(42, "Another positive integer");
	test_itoa(-42, "Another negative integer");
	test_itoa(2147483647, "Max positive int");
	test_itoa(-2147483648, "Min negative int");
	printf("\nAll tests completed.\n");
	return (0);
}
