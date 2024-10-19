/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_35.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:36:27 by mmilitar          #+#    #+#             */
/*   Updated: 2024/10/19 21:36:30 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	*content[20];
	t_list	*new_node;

	ft_memset(content, 0, sizeof(content));
	ft_memset(content, 'A', 5);
	new_node = ft_lstnew(content);
	printf("--- Testing ft_lstnew function ---\n");
	if (new_node)
	{
		printf("Node content: %s\n", (char *)new_node->content);
		printf("Node next: %p\n", (void *)new_node->next);
		printf("--- Testing has finished ---\n");
		free(new_node);
	}
	else
	{
		printf("Failed to create a new node.\n");
	}
	return (0);
}
