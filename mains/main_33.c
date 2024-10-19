/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_33.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:13:03 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 21:13:05 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	printf("Testing ft_putendl_fd function\n\n");
	ft_putendl_fd("Hello, World!", 1);
	ft_putendl_fd("An error occurred", 2);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd(NULL, 1);
	printf("\n\nAll tests completed.\n");
	return (0);
}
