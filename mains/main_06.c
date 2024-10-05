/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:28:54 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/09 23:30:43 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	const char	*test_cases[5];
	int			num_cases;
	int			i;

	printf("\n--- Testing ft_strlen function ---\n\n");
	i = 0;
	test_cases[0] = "Hello, world!";
	test_cases[1] = "";
	test_cases[2] = "42 Barcelona";
	test_cases[3] = "Lorem ipsum dolor sit amet.";
	test_cases[4] = "C programming";
	num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
	while (i < num_cases)
	{
		printf("The length of \"%s\" is %zu.\n", test_cases[i],
			ft_strlen(test_cases[i]));
		i++;
	}
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
