/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:43:35 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/10 14:44:43 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i <= nb)
			return (i);
		i++;
	}
	return (0);
}
