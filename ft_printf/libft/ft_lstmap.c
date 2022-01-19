/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:03:55 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 19:19:02 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),	void (*del)(void *))
{
	t_list	*head;
	t_list	*res;
	t_list	*tmp;

	res = NULL;
	head = lst;
	while (head)
	{	
		tmp = ft_lstnew(f(head->content));
		if (tmp == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, tmp);
		head = head->next;
	}
	return (res);
}
