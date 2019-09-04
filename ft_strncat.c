/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:40:55 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 13:48:50 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*temp;

	temp = s1;
	while (*s1)
		s1++;
	while (*s2 && n-- > 0)
		*s1++ = *s2++;
	*s1 = '\0';
	return (temp);
}