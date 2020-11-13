/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:12:11 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 15:41:13 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_arr_size(const char *s, char c)
{
	int		res;
	int		idx;
	int		flag;

	res = 1;
	idx = -1;
	flag = 1;
	while (s[++idx])
	{
		if (s[idx] == c && !flag)
		{
			++res;
			flag = 1;
		}
		else if (s[idx] != c && flag)
			flag = 0;
	}
	return (flag ? --res : res);
}

static int	check_word_len(const char *s, char c, int *start)
{
	int		len;
	int		temp_start;

	len = 0;
	while (s[*start] && s[*start] == c)
		++*start;
	temp_start = *start;
	while (s[temp_start] && s[temp_start] != c)
	{
		++len;
		++temp_start;
	}
	return (len);
}

static void	free_array(char **arr, int idx)
{
	while (idx--)
		free(arr[idx]);
	free(arr);
}

char		**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		word_len;
	int		start;

	if (!(arr = (char **)malloc((check_arr_size(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = -1;
	start = 0;
	while (++i < check_arr_size(s, c))
	{
		j = -1;
		word_len = check_word_len(s, c, &start);
		if (!(arr[i] = (char *)malloc(word_len + 1)))
		{
			free_array(arr, i);
			return (NULL);
		}
		while (++j < word_len)
			arr[i][j] = s[start++];
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
