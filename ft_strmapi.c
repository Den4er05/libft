/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:31:11 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 14:31:13 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	idx;

	if (!(res = malloc(ft_strlen(s) + 1)))
		return (NULL);
	idx = -1;
	while (s[++idx])
		res[idx] = f(idx, s[idx]);
	res[idx] = '\0';
	return (res);
}
