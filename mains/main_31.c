/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_31.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:00:32 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 21:01:27 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_putchar_fd(char c, int fd, const char *test_name)
{
	printf("\n=== Test: %s ===\n", test_name);
	ft_putchar_fd(c, fd);
	printf("\n===========================\n");
}

int	main(void)
{
	printf("Testing ft_putchar_fd function\n");
	test_putchar_fd('H', 1, "Print 'H' to stdout");
	test_putchar_fd('e', 1, "Print 'e' to stdout");
	test_putchar_fd('l', 1, "Print 'l' to stdout");
	test_putchar_fd('l', 1, "Print 'l' to stdout");
	test_putchar_fd('o', 1, "Print 'o' to stdout");
	test_putchar_fd(' ', 1, "Print space to stdout");
	test_putchar_fd('W', 1, "Print 'W' to stdout");
	test_putchar_fd('o', 1, "Print 'o' to stdout");
	test_putchar_fd('r', 1, "Print 'r' to stdout");
	test_putchar_fd('l', 1, "Print 'l' to stdout");
	test_putchar_fd('d', 1, "Print 'd' to stdout");
	test_putchar_fd('!', 1, "Print '!' to stdout");
	test_putchar_fd('E', 2, "Print 'E' to stderr");
	test_putchar_fd('r', 2, "Print 'r' to stderr");
	test_putchar_fd('r', 2, "Print 'r' to stderr");
	test_putchar_fd('o', 2, "Print 'o' to stderr");
	test_putchar_fd('r', 2, "Print 'r' to stderr");
	test_putchar_fd('!', 2, "Print '!' to stderr");
	printf("\nAll tests completed.\n");
	return (0);
}
