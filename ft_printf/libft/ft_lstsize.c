/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:51:44 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 17:51:59 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*head;

	head = lst;
	if (lst == 0)
		return (0);
	count = 1;
	while (head->next)
	{
		count++;
		head = head->next;
	}
	return (count);
}

/*
#include <stdio.h>

int	main()
{
	t_list	*lst;
	
	lst = ft_lstnew(ft_strdup("1"));
	lst->next = ft_lstnew(ft_strdup("2"));
	
	printf("%d\n", ft_lstsize(lst));
}
*/
