/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_32.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:10:01 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 21:10:03 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	printf("Testing ft_putstr_fd function\n\n");
	ft_putstr_fd("Hello, World!\n", 1);
	ft_putstr_fd("An error occurred\n", 2);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd(NULL, 1);
	printf("\n\nAll tests completed.\n");
	return (0);
}
