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
	int	test_cases[5];
	int	num_cases;
	int	i;

	printf("\n--- Testing ft_isprint function ---\n\n");
	i = 0;
	test_cases[0] = 31;
	test_cases[1] = 32;
	test_cases[2] = 65;
	test_cases[3] = 126;
	test_cases[4] = 127;
	num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
	while (i < num_cases)
	{
		if (ft_isprint(test_cases[i]))
			printf("The value %d is a printable character.\n",
				test_cases[i]);
		else
			printf("The value %d is NOT a printable character.\n",
				test_cases[i]);
		i++;
	}
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
