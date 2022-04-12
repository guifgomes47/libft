/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:20:20 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/12 12:38:06 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	e_size;

	i = 0;
	if (ft_strlen(dst) < size)
	{
		e_size = ft_strlen(src) + ft_strlen(dst);
		while (*dst)
		{
			dst++;
		}
		while (src[i] && i < size - (e_size - ft_strlen(src)) - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (e_size);
	}
	return (ft_strlen(src) + size);
}
