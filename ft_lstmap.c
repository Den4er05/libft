/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:04:46 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 17:05:52 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;
	t_list	*lst_cur;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	head = NULL;
	lst_cur = lst;
	while (lst_cur)
	{
		if (!(node = ft_lstnew(f(lst_cur->content))))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst_cur = lst_cur->next;
	}
	return (head);
}
