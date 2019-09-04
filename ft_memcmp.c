/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:52:50 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 11:02:24 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*(char*)s1 == *(char*)s2 && n-- > 0)
	{
		s1++;
		s2++;
	}
	if (*(char*)s1 != *(char*)s2)
		return (*(char*)s1 - *(char*)s2);
	else
		return 0;
}
