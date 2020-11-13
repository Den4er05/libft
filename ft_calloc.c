/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:37:24 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/04 12:07:34 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *arr;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	arr = malloc(count * size);
	if (arr)
		ft_bzero(arr, count * size);
	return (arr);
}
