/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 08:57:13 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/14 09:04:24 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
int main()
{
    char *str1 = "Hello, World!";
    char *str2 = "Hello, World!";
    char *str3 = "Hello, Universe!";
    char *str4 = "Hello";
    char *str5 = "Hello, WorlD!";
    
    // Comparaciones
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str2, ft_strncmp(str1, str2, 15));
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str3, ft_strncmp(str1, str3, 15));
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str4, ft_strncmp(str1, str4, 5));
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str5, ft_strncmp(str5, str1, 15));
    printf("Comparando \"%s\" y \"%s\": %d\n", str4, str2, ft_strncmp(str4, str2, 5));
    printf("Comparando \"%s\" y \"%s\": %d\n", str4, str2, ft_strncmp(str4, str2, 3));
    return (0);
}
*/
