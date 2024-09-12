/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:36:42 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 09:52:40 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}
}
