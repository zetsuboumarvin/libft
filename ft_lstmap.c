/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:14:35 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/07 14:26:35 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*temp;
	t_list		*new;
	t_list		*head;
	int			i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		temp = lst->next;
		new = (*f)(lst);
		if (!new)
			return (NULL);
		if (i == 0)
			head = new;
		new = new->next;
		i++;
		lst = temp;
	}
	return (head);
}
