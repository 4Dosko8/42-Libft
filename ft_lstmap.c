/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassane <ahassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:41:21 by ahassane          #+#    #+#             */
/*   Updated: 2026/11/07 19:22:54 by ahassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*tmp;
	t_list	*n;
	t_list	*nlist;

	if (!lst || !f || !del)
		return (NULL);
	n = NULL;
	nlist = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		n = ft_lstnew(tmp);
		if (!n)
		{
			del(tmp);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, n);
		lst = lst->next;
	}
	return (nlist);
}
