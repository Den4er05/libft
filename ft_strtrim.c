/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:30:43 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 15:13:53 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	int			start;
	int			end;

	end = (int)ft_strlen(s) - 1;
	start = 0;
	while (start < (int)ft_strlen(s) && ft_strchr(set, s[start]))
		++start;
	while (end > start && ft_strchr(set, s[end]))
		--end;
	return (ft_substr(s, start, end - start + 1));
}
