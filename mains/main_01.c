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
	char	test_cases[6];
	int		num_cases;
	int		i;

	num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
	test_cases[0] = 'A';
	test_cases[1] = 'z';
	test_cases[2] = '5';
	test_cases[3] = 'b';
	test_cases[4] = '!';
	test_cases[5] = 'M';
	printf("\n--- Testing ft_isalpha function ---\n\n");
	i = 0;
	while (i < num_cases)
	{
		if (ft_isalpha(test_cases[i]))
			printf("The character '%c' is an alphabetic character.\n",
				test_cases[i]);
		else
			printf("The character '%c' is NOT an alphabetic character.\n",
				test_cases[i]);
		i++;
	}
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
