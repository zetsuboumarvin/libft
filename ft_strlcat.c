/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:53:30 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 14:35:44 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	count;

	count = 0;
	while (*dst && count < size - 1)
	{
		dst++;
		count++;
	}
	while (*src && count < size - 1)
	{
		*dst++ = *src++;
		count++;
	}
	*dst = '\0';
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}
