/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:29:56 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 14:29:57 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*begin;

	begin = lst;
	len = 0;
	while (begin)
	{
		++len;
		begin = begin->next;
	}
	return (len);
}
