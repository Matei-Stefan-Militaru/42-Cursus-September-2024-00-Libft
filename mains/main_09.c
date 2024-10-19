/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_09.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:32:46 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/06 12:34:27 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	print_content(void *ptr, size_t size, int type)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		if (type == 0)
		{
			if (i % sizeof(int) == 0 && i + sizeof(int) <= size)
				printf("%d ", *(int *)(p + i));
			i += sizeof(int);
		}
		else
		{
			if (p[i] >= 32 && p[i] <= 126)
				printf("%c", p[i]);
			else
				printf("\\%d", p[i]);
			i++;
		}
	}
	printf("\n");
}

static void	test_memcpy(void *dest, const void *src, size_t n, char *test_name)
{
	void	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Before ft_memcpy:\n");
	printf("Source: ");
	print_content((void *)src, n, 1);
	printf("Destination: ");
	print_content(dest, n, 1);
	result = ft_memcpy(dest, src, n);
	printf("\nAfter ft_memcpy:\n");
	printf("Result address: %p (should be %p)\n", result, dest);
	printf("Destination: ");
	print_content(dest, n, 1);
	printf("===========================\n");
}

static void	run_overlap_and_null_and_string_test(void)
{
	void	*result;
	char	overlap[20];
	char	str_dest[50];
	char	str_src[13];

	ft_strlcpy(str_src, "Hello, World!", sizeof(str_src));
	ft_strlcpy(overlap, "Hello, World!", sizeof(overlap));
	printf("\n=== Test: Overlap case (for demonstration) ===\n");
	printf("Original: %s\n", overlap);
	ft_memcpy(overlap + 2, overlap, 5);
	printf("After overlap: %s\n", overlap);
	printf("\n=== Test: NULL pointers ===\n");
	result = ft_memcpy(NULL, NULL, 5);
	printf("NULL test result: %p (should be NULL)\n", result);
	ft_memset(str_dest, 0, sizeof(str_dest));
	test_memcpy(str_dest, str_src, ft_strlen(str_src) + 1, "Basic string copy");
	test_memcpy(str_dest, str_src, 0, "Zero bytes copy");
}

static void	run_array_and_mixed_content_tests(void)
{
	char	mixed_dest[10];
	char	mixed_src[10];
	int		arr_dest[5];
	int		arr_src[5];
	int		i;

	i = 0;
	while (i < 5)
	{
		arr_src[i] = i + 1;
		i++;
	}
	ft_memcpy(mixed_src, "Ab\0cD\nEf", 10);
	ft_memset(arr_dest, 0, sizeof(arr_dest));
	test_memcpy(arr_dest, arr_src, sizeof(arr_src), "Integer array copy");
	printf("Integer array result: ");
	print_content(arr_dest, sizeof(arr_dest), 0);
	ft_memset(mixed_dest, 0, sizeof(mixed_dest));
	test_memcpy(mixed_dest, mixed_src, sizeof(mixed_src),
		"Mixed content with null bytes");
}

int	main(void)
{
	printf("\n--- Testing ft_memcpy function ---\n\n");
	run_array_and_mixed_content_tests();
	run_overlap_and_null_and_string_test();
	printf("\n--- Testing has finished ---\n\n");
	return (0);
}
