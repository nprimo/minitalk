/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:15:35 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:54:25 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
#include <string.h>

void	del_str(void *el_void)
{
	char	*el;

	el = (char *)el_void;
	free(el);
}

int	main()
{
	t_list	*lst;
	t_list	*head;

	lst = ft_lstnew((void *)strdup("test"));
	printf("before: %s \n", lst->content);
	ft_lstdelone(lst, del_str);
	printf("after: %s \n", lst->content);
}
*/
