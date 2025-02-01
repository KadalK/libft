/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@strudent.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:32 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/04 14:50:32 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
//static size_t	count_word(char const *s, char c)
//{
//	size_t	i;
//	size_t	wrd;
//
//	i = 0;
//	wrd = 0;
//	while (s[i])
//	{
//		if (s[i] != c && (i == 0 || s[i - 1] == c))
//			wrd++;
//		i++;
//	}
//	return (wrd);
//}
//
//static size_t	ft_superlen(char const *s, char c, size_t *index)
//{
//	size_t	len;
//
//	len = 0;
//	while (s[*index] && s[*index] == c)
//		(*index)++;
//	while (s[*index + len] && s[*index + len] != c)
//		len++;
//	return (len);
//}
//
//static char	*ft_superdup(char const *s, size_t len, size_t *index)
//{
//	char	*word;
//	size_t	i;
//
//	word = ft_calloc(len + 1, sizeof(char));
//	if (!word)
//		return (NULL);
//	i = 0;
//	while (i < len)
//	{
//		word[i] = s[*index];
//		(*index)++;
//		i++;
//	}
//	return (word);
//}
//
//static void	free_split(char **split, size_t i)
//{
//	while (i > 0)
//	{
//		free(split[i - 1]);
//		i--;
//	}
//	free(split);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	char	**split;
//	size_t	i;
//	size_t	index;
//	size_t	len;
//
//	if (!s)
//		return (NULL);
//	split = ft_calloc(count_word(s, c) + 1, sizeof(char *));
//	if (!split)
//		return (NULL);
//	i = 0;
//	index = 0;
//	while (i < count_word(s, c))
//	{
//		len = ft_superlen(s, c, &index);
//		split[i] = ft_superdup(s, len, &index);
//		if (!split[i])
//		{
//			free_split(split, i);
//			return (NULL);
//		}
//		i++;
//	}
//	split[i] = NULL;
//	return (split);
//}

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = 0;
	if (s[i] != c && s[i] != 0)
		words++;
	i++;
	while (s[0] && s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static size_t	ft_wdlen(char const *s, char c, size_t j)
{
	size_t	i;

	i = j;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

static char	*ft_superdup(char const *s, char c, size_t *j)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_wdlen(s, c, *j);
	str = malloc(sizeof(char) * (len - *j + 1));
	if (str == NULL)
		return (str);
	i = 0;
	while (*j < len)
	{
		str[i] = s[*j];
		*j += 1;
		i++;
	}
	str[i] = 0;
	return (str);
}

void	*ft_splitdestroy(char **split)
{
	size_t	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	words;
	char	**split;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	words = ft_countwords(s, c);
	split = ft_calloc((words + 1), sizeof(char *));
	if (!s[0] || split == NULL)
		return (split);
	while (i < words)
	{
		if (s[j] != c)
		{
			split[i++] = ft_superdup(s, c, &j);
			if (split[i - 1] == NULL)
				return (ft_splitdestroy(split));
		}
		else
			j++;
	}
	return (split);
}
