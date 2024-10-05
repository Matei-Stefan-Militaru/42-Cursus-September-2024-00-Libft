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
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	str1[50];
	char	str2[50];
	char	c;
	size_t	n;

	c = 'X';
	n = 5;
	strcpy(str1, "Hello, world!");
	strcpy(str2, "Hello, world!");
	printf("\n--- Testing ft_memset function ---\n\n");
	printf("Original string: \"%s\"\n", str1);
	ft_memset(str1, c, n);
	printf("Modified string using ft_memset: \"%s\"\n", str1);
	printf("\nUsing standard memset for comparison:\n");
	memset(str2, c, n);
	printf("Modified string using standard memset: \"%s\"\n", str2);
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
