/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:04:23 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/07 14:12:36 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;

	if (!alst || !(*alst))
		return ;
	while (*alst)
	{
		temp = (*alst)->next;
		ft_lstdelone(alst, (*del)(void *, size_t));
		*alst = temp;
	}
}
