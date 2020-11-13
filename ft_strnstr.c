/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:08:47 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 15:11:49 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_idx;
	size_t	n_idx;

	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	h_idx = 0;
	while (haystack[h_idx] && h_idx < len)
	{
		n_idx = 0;
		while (needle[n_idx] && haystack[h_idx + n_idx] == needle[n_idx] && \
			h_idx + n_idx < len)
			++n_idx;
		if (needle[n_idx] == '\0')
			return ((char *)haystack + h_idx);
		++h_idx;
	}
	return (NULL);
}
