/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassane <ahassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:43:52 by ahassane          #+#    #+#             */
/*   Updated: 2026/11/09 16:01:13 by ahassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trimedstr(const char *s1, size_t start, size_t end)
{
	char	*nstr;
	int		i;

	if (start - end == 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	nstr = (char *)ft_calloc(end - start + 1, sizeof(char));
	if (!nstr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		nstr[i] = s1[start];
		start++;
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

static int	strccmp(char c, char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	s1len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	s1len = ft_strlen(s1);
	while (strccmp(s1[i], (char *)set))
		i++;
	start = i;
	while (s1len > start && strccmp(s1[s1len - 1], (char *)set))
		s1len--;
	return (trimedstr(s1, start, s1len));
}
