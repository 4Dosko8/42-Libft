/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassane <ahassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:06:45 by ahassane          #+#    #+#             */
/*   Updated: 2026/11/09 16:23:52 by ahassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*tmp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	tmp = malloc((intlen(n) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[intlen(n)] = '\0';
	i = intlen(n) - 1;
	if (n < 0)
	{
		tmp[0] = '-';
		n = n * -1;
	}
	while (n != 0)
	{
		tmp[i] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	return (tmp);
}
