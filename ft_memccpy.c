/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 08:30:50 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 08:38:23 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char*)src == c)
		{
			*(char*)dst++ = *(char*)src;
			return (dst);
		}
		*(char*)dst++ = *(char*)src++;
	}
	return (NULL);
}
