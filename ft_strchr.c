/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:57:57 by adrean            #+#    #+#             */
/*   Updated: 2018/09/11 14:59:58 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int character)
{
	while (*str) {
		if (*str == character)
			return ((char*)str);
		str++;
	}
	if (character == 0)
		return ((char*)str);
	return (0);
}
