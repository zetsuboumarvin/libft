/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:43:03 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 10:50:52 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	void	*temp;

	temp = (void*)s;
	while (*(unsigned char*)temp != (unsigned char)c && n--
				&& *(unsigned char*)temp)
		temp++;
	if (*(unsigned char*)temp == (unsigned char)c)
		return (temp);
	else
		return (NULL);
}
