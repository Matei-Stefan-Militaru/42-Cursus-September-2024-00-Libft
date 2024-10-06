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

static void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

static void	print_memory(void *ptr, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		if (p[i] >= 32 && p[i] <= 126)
			printf("%c", p[i]);
		else
			printf("\\%d", p[i]);
		i++;
	}
	printf("\n");
}

static void	test_memcpy(void *dest, const void *src, size_t n, char *test_name)
{
	void	*result;

	printf("\n=== Test: %s ===\n", test_name);
	printf("Before ft_memcpy:\n");
	printf("Source: ");
	print_memory((void *)src, n);
	printf("Destination: ");
	print_memory(dest, n);
	result = ft_memcpy(dest, src, n);
	printf("\nAfter ft_memcpy:\n");
	printf("Result address: %p (should be %p)\n", result, dest);
	printf("Destination: ");
	print_memory(dest, n);
	printf("===========================\n");
}

static void	run_overlap_test(void)
{
	char	overlap[20];

	ft_strlcpy(overlap, "Hello, World!", sizeof(overlap));
	printf("\n=== Test: Overlap case (for demonstration) ===\n");
	printf("Original: %s\n", overlap);
	ft_memcpy(overlap + 2, overlap, 5);
	printf("After overlap: %s\n", overlap);
}

static void	run_null_test(void)
{
	void	*result;

	printf("\n=== Test: NULL pointers ===\n");
	result = ft_memcpy(NULL, NULL, 5);
	printf("NULL test result: %p (should be NULL)\n", result);
}

int	main(void)
{
	char	str_dest1[50];
	char	str_src1[] = "Hello, World!";
	int		arr_dest[5];
	int		arr_src[] = {1, 2, 3, 4, 5};
	char	mixed_dest[10];
	char	mixed_src[] = "Ab\0cD\nEf";

	ft_memset(str_dest1, 0, sizeof(str_dest1));
	ft_memset(arr_dest, 0, sizeof(arr_dest));
	ft_memset(mixed_dest, 0, sizeof(mixed_dest));
	test_memcpy(str_dest1, str_src1, strlen(str_src1) + 1,
		"Basic string copy");
	test_memcpy(arr_dest, arr_src, sizeof(arr_src),
		"Integer array copy");
	printf("Integer array result: ");
	print_array(arr_dest, 5);
	test_memcpy(mixed_dest, mixed_src, sizeof(mixed_src),
		"Mixed content with null bytes");
	test_memcpy(str_dest1, str_src1, 0,
		"Zero bytes copy");
	run_overlap_test();
	run_null_test();
	return (0);
}
