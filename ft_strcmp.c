/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:13:54 by adrean            #+#    #+#             */
/*   Updated: 2018/09/11 21:25:01 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int diff;

	while (*str1 || *str2)
	{
		diff = (unsigned char)*str1 - (unsigned char)*str2;
		if (diff != 0)
			return (diff);
		str1++;
		str2++;
	}
	return (0);
}
