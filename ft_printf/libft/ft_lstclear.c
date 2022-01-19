/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:24:15 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:54:39 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*tmp;

	head = *lst;
	while (head)
	{
		tmp = head;
		ft_lstdelone(head, del);
		head = tmp->next;
	}
	*lst = NULL;
}
