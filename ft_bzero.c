/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:35:36 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 09:51:07 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*
int	main(void)
{
	char	buffer[10] = "Hello";
	write(1, "Original buffer", 17);
	write(1, buffer, sizeof(buffer));
	write(1, "\n", 1);
	ft_bzero(buffer, 5);
	write(1, "Buffer after b_zero: ", 24);
	write(1, buffer, sizeof(buffer));
	write(1, "\n", 1);
	return (0);
}
*/
