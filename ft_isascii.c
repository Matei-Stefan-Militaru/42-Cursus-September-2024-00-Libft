/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:33:36 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/09 23:41:22 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;
	
	c = 130;
	if (ft_isascii(c))
		write(1, "c is ascii", 10);
	else
		write(1, "c is not ascii", 14);
}
*/
