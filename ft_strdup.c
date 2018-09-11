/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:22:28 by adrean            #+#    #+#             */
/*   Updated: 2018/09/11 14:56:44 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int len;
	int i;
	char *cpy;

	len = ft_strlen(str);
	cpy = (char *) malloc((len + 1) * sizeof(*str));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < len) {
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
