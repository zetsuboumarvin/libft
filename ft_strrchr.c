/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:43:39 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/04 14:58:28 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*temp;
	char	*result;

	temp = (char*)s;
	while (*temp)
	{
		if (*temp == c)
			result = temp;
		temp++;
	}
	return (result);
}
