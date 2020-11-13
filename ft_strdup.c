/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:34:48 by iadzuki           #+#    #+#             */
/*   Updated: 2020/10/31 15:24:32 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*res;
	char		*start;
	const char	*copy;

	if (!(res = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	start = res;
	copy = s;
	while (*copy)
		*res++ = *copy++;
	*res = '\0';
	return (start);
}
