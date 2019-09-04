/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:37:29 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 14:42:40 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = (char*)s;
	while (*temp && *temp != c)
		temp++;
	if (*temp == c)
		return (temp);
	else
		return (NULL);
}
