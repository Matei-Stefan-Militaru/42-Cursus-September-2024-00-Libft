/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_30.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:32:18 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 20:32:20 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	print_result(char *str)
{
	printf("Modified string: \"%s\"\n", str);
}

static void	modify_char(unsigned int index, char *c)
{
	(void)index;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	test_str[50];

	memset(test_str, 0, sizeof(test_str));
	strcpy(test_str, "hello world!");
	printf("Testing ft_striteri function\n");
	ft_striteri(test_str, modify_char);
	print_result(test_str);
	printf("\nAll tests completed.\n");
	return (0);
}
