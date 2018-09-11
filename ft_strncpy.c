/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:06:41 by adrean            #+#    #+#             */
/*   Updated: 2018/09/11 14:54:44 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *destination, const char *source, size_t num)
{
	char end = 0;
	for (size_t i = 0; i < num; i++) {
		if (!end) {
			destination[i] = source[i];
			end = source[i] == 0;
		} else {
			destination[i] = 0;
		}
	}
	return (destination);
}
