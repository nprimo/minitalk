/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:59:21 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 18:12:42 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*
#include <stdio.h>

int	main()
{
	t_list	*lst;
	t_list	*head;

	lst = ft_lstnew(ft_strdup("1"));
	lst->next = ft_lstnew(ft_strdup("2"));
	lst->next->next = ft_lstnew(ft_strdup("3"));
	head = lst;
	while (head->next)
	{
		printf("%s - ", head->content);
		head = head->next;
	}
	printf("%s\n", head->content);
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("NEW!")));
	head = lst;
	while (head->next)
	{
		printf("%s - ", head->content);
		head = head->next;
	}
	printf("%s\n", head->content);
}
*/
