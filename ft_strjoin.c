/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassane <ahassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:57:59 by ahassane          #+#    #+#             */
/*   Updated: 2026/11/09 14:40:27 by ahassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*nstr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	size = i + ft_strlen(s2) + 1;
	nstr = malloc(size * sizeof(char));
	if (!nstr)
		return (NULL);
	j = 0;
	ft_memcpy(nstr, s1, ft_strlen(s1));
	while (s2[j])
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
