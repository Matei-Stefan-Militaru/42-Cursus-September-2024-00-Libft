/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_34.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:22:01 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 21:22:18 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	printf("Testing ft_putnbr_fd function\n");
	ft_putnbr_fd(42, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	close(fd);
	printf("\nAll tests completed. Check 'output.txt' for results.\n");
	return (0);
}
