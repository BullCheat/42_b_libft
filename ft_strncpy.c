/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:06:41 by adrean            #+#    #+#             */
/*   Updated: 2018/09/11 21:35:11 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t num)
{
	char	end;
	size_t	i;

	end = 0;
	i = 0;
	while (i < num)
	{
		if (!end)
		{
			destination[i] = source[i];
			end = source[i] == 0;
		}
		else
			destination[i] = 0;
		i++;
	}
	return (destination);
}
