/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:08:27 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 12:26:15 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
int	main()
{
	const char	*src = "Hello World";
	char		dest[20];
	size_t		copied_length;
	
	copied_length = ft_strlcpy(dest, src, sizeof(dest));
	write(1, "Contenido de la cadena de origen: ", 35);
	write(1, src, 12);
	write(1, "\n", 1);
	write(1, "Contenido de la cadena de destino: ", 37);
	write(1, dest, 12);
	write(1, "\n", 1);
}
*/
