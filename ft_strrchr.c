/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:26:54 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 13:27:19 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*last;

	ch = (char)c;
	last = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			last = s;
		s++;
	}
	if (*s == ch)
		last = s;
	return ((char *)last);
}

/*
int main()
{
    const char *str = "Hello, World!";
    int c = 'o';
    char *result;

    result = ft_strrchr(str, c);
    if (result != NULL)
    {
        write(1, "Ultima aparicion de '", 21);
        write(1, &c, 1);
        write(1, "' en la cadena: ", 16);
        write(1, result, strlen(result));
        write(1, "\n", 1);
    }
    else
    {
        write(1, "Carácter no encontrado.\n", 25);
    }

    return 0;
}
*/
