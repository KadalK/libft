#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t wrd;

	i = 0;
	wrd = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wrd++;
		i++;
	}
	return (wrd);
}

static size_t	ft_superlen(char const *s, char c, size_t *i)
{
	size_t	len;

	len = 0;
	while(s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	return len;
}
static char	*ft_superdup(char const *s, size_t len, size_t *index)
{
	char	*word;
	size_t	i;

	word = ft_calloc(len + 1, sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[*index];
		(*index)++;
		i++;
	}
	return (word);
}

static void	split_destroy(char **split, size_t i)
{
	while (i > 0)
		free (split[--i]);
	free (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	word_count;
	size_t	index;
	size_t	len;

	if(!s)
		return (NULL);

	word_count = count_word(s, c);

	split = ft_calloc(word_count + 1, sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	index = 0;
	while (index < word_count)
	{
		len = ft_superlen(s, c, &i);
		split[index] = ft_superdup(s, len, &i);
		if (!split[index])
		{
			split_destroy(split, index);
			return (NULL);
		}
		index++;
	}
	split[index] = NULL;
	return (split);
}
#include <stdio.h>
#include "libft.h"

int main()
{
	char **result = ft_split("une delicieuse glace à la vionde", ' ');
	size_t i = 0;
	while (result && result[i])
	{
		printf("Le mot %zu: %s\n", i, result[i]);
		i++;
	}
	split_destroy(result, count_word("une délicieuse glace à la vionde", ' '));
	return 0;
}



