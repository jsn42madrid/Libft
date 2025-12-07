/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:45:05 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:28:11 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_split		split string into array of substrings

#include "libft.h"	

#include <stdlib.h>

/*
Count how many substrings will be created
*/
static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

/*
Duplicate a substring of length len
*/
static char	*ft_word_dup(const char *start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/*
Free all allocated substrings if error occurs
*/
static void	ft_free_all(char **arr, int i)
{
	while (i > 0)
	{
		free(arr[i - 1]);
		i--;
	}
	free(arr);
}

/*
Extract one word starting at s until delimiter or end
*/
static char	*ft_extract_word(const char **s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = ft_word_dup(*s, len);
	if (!word)
		return (NULL);
	*s += len;
	return (word);
}

/*
Main split_string function (≤25 lines)
*/
char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[i] = ft_extract_word(&s, c);
			if (!res[i])
				return (ft_free_all(res, i), NULL);
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}
