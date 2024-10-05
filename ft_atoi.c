/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:02:23 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 16:08:46 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
void print_string(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

void print_number(int n)
{
	char buffer[12]; 
	int i = 11;
	int is_negative = 0;

	buffer[i--] = '\0';

	if (n == 0)
	{
		buffer[i] = '0';
		write(1, &buffer[i], 1);
		return;
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n > 0)
	{
		buffer[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
	{
		buffer[i--] = '-';
	}
	write(1, &buffer[i + 1], 11 - i);
}

int	main()
{
	const char *testStrings[] = {"42", "   -123", "0", "+12345", "-00056", 
	"2147483647", "-217483648", "   +0", "abc123", "123abc", "", 
	"  \t\n\r\v\f 456"};
	int		numTests;
	int		i;
	
	numTests = sizeof(testStrings) / sizeof(testStrings[0]);
	i = 0;
	while (i < numTests)
	{
		print_string("Input: \"");
		print_string(testStrings[i]);
		print_string("\" -> Output: ");
		print_number(ft_atoi(testStrings[i]));
		write(1, "\n", 1);
		i++;
	}
	
}
*/
