/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:52:50 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/05 09:20:10 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*(unsigned char*)s1 == *(unsigned char*)s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (*(unsigned char*)s1 != *(unsigned char*)s2 && n)
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	else
		return (0);
}
