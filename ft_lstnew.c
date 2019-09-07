/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:49:03 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/07 14:42:12 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = malloc(sizeof(size_t) + content_size + sizeof(t_list*));
	if (!new)
		return (NULL);
	new->content = (void*)content;
	new->next = NULL;
	new->content_size = content_size;
	return (new);
}
