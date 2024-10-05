/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:55:38 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/05 16:55:46 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		result[i] = s2[i - len1];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
void ft_putstr(char *str)
{
    if (str)
        write(1, str, ft_strlen(str));
}

void ft_putendl(char *str)
{
    ft_putstr(str);
    write(1, "\n", 1);
}

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result;

    // Test 1: Normal case
    ft_putstr("Test 1: ");
    result = ft_strjoin(s1, s2);
    ft_putendl(result);
    free(result);

    // Test 2: Empty string as s1
    ft_putstr("Test 2: ");
    result = ft_strjoin("", s2);
    ft_putendl(result);
    free(result);

    // Test 3: Empty string as s2
    ft_putstr("Test 3: ");
    result = ft_strjoin(s1, "");
    ft_putendl(result);
    free(result);

    // Test 4: Both strings empty
    ft_putstr("Test 4: ");
    result = ft_strjoin("", "");
    ft_putendl(result);
    free(result);

    // Test 5: NULL as s1 (should return NULL)
    ft_putstr("Test 5: ");
    result = ft_strjoin(NULL, s2);
    if (result == NULL)
        ft_putendl("NULL (as expected)");
    else
    {
        ft_putendl("Unexpected result");
        free(result);
    }

    // Test 6: NULL as s2 (should return NULL)
    ft_putstr("Test 6: ");
    result = ft_strjoin(s1, NULL);
    if (result == NULL)
        ft_putendl("NULL (as expected)");
    else
    {
        ft_putendl("Unexpected result");
        free(result);
    }

    return (0);
}
*/
