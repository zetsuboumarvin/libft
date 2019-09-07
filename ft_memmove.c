/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 08:55:58 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/07 16:06:39 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		buf[len];
	unsigned char		*temp;
	unsigned int		i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	temp = dst;
	while (i < len)
		buf[i++] = *(unsigned char*)src++;
	i = 0;
	while (i < len)
		*(unsigned char*)dst++ = buf[i++];
	return (temp);
}
