/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassane <ahassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:41:44 by ahassane          #+#    #+#             */
/*   Updated: 2026/11/09 14:30:54 by ahassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ss;
	unsigned char	cc;
	int				i;
	int				slen;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	slen = ft_strlen(s);
	while (i < slen)
	{
		if (ss[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (ss[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
