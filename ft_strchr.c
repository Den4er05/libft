/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:34:34 by iadzuki           #+#    #+#             */
/*   Updated: 2020/10/31 12:34:35 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		++str;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
