/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_22.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:20:55 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 17:20:57 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_calloc(size_t nmemb, size_t size, const char *test_name)
{
	void			*ptr;
	size_t			i;
	unsigned char	*byte_ptr;

	printf("\n=== Test: %s ===\n", test_name);
	ptr = ft_calloc(nmemb, size);
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return ;
	}
	byte_ptr = (unsigned char *)ptr;
	printf("Allocated memory for %zu elements of size %zu:\n", nmemb, size);
	i = 0;
	while (i < nmemb * size)
	{
		printf("%u ", byte_ptr[i]);
		if ((i + 1) % nmemb == 0 || size == 1)
			printf("| ");
		i++;
	}
	printf("\n");
	free(ptr);
	printf("===========================\n");
}

static void	run_calloc_tests(void)
{
	test_calloc(5, sizeof(int), "Allocate an array of 5 integers");
	test_calloc(0, sizeof(int), "Allocate 0 elements");
	test_calloc(3, 0, "Allocate an array of size 3 with 0 size");
	test_calloc(10, sizeof(char), "Allocate an array of 10 characters");
}

int	main(void)
{
	printf("Testing ft_calloc function\n\n");
	run_calloc_tests();
	printf("\nAll tests completed.\n");
	return (0);
}
