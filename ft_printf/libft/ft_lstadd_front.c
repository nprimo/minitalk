/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:33 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/25 16:44:30 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

int	main()
{
	t_list	lst[3];
	t_list	*head;
	t_list	*new;

	new = ft_lstnew("ciao mamma!");
	lst[0].content = "1";
	lst[0].next = &lst[1];
	lst[1].content = "2";
	lst[1].next = &lst[2];
	lst[2].content = "3";
	lst[2].next = 0;
	printf("--before--\n");
	head = lst;
	while (head->next)
	{
		printf("%s ", head->content);
		head = head->next;
	}
	printf("%s\n", head->content);
	printf("--after--\n");
	head = lst;
	ft_lstadd_front(&head, new);
	// new->next = lst;
	// head = new;
	while (head->next)
	{
		printf("%s ", head->content);
		head = head->next;
	}
	printf("%s\n", head->content);
}
*/
