/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 08:55:58 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 09:20:52 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char				buf[len];
	char				*temp;
	unsigned int		i;

	i = 0;
	temp = dst;
	while (i < len)
		buf[i++] = *(char*)src++;
	i = 0;
	while (i < len)
		*(char*)dst++ = buf[i++];
	return (temp);
}
