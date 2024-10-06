/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 09:11:48 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/06 09:11:58 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_string_with_nulls(const char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			putchar(str[i]);
		i++;
	}
}

void	test_ft_bzero(char *str, size_t n)
{
	printf("\nOriginal string: \"%s\"\n", str);
	ft_bzero(str, n);
	printf("Modified string using ft_bzero (first %zu bytes set to 0): \"", n);
	print_string_with_nulls(str, strlen("Hello, world!") + 1);
	printf("\"\n");
}

void	test_standard_bzero(char *str, size_t n)
{
	printf("\nUsing standard bzero for comparison:\n");
	bzero(str, n);
	printf("Modified string using standard bzero ");
	printf("(first %zu bytes set to 0): \"", n);
	print_string_with_nulls(str, strlen("Hello, world!") + 1);
	printf("\"\n");
}

int	main(void)
{
	char	str1[50];
	char	str2[50];
	size_t	n;

	n = 6;
	ft_bzero(str1, sizeof(str1));
	ft_bzero(str2, sizeof(str2));
	strcpy(str1, "Hello, world!");
	strcpy(str2, "Hello, world!");
	printf("\n--- Testing ft_bzero function ---\n\n");
	test_ft_bzero(str1, n);
	test_standard_bzero(str2, n);
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
