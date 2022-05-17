/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:35:45 by guilhfer          #+#    #+#             */
/*   Updated: 2022/05/01 18:18:35 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *scan, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
	{
		return ((char *)scan);
	}
	i = 0;
	j = ft_strlen(find);
	while (scan[i] && (i + j) <= len)
	{
		if (!ft_strncmp(&scan[i], find, j))
		{
			return ((char *)&scan[i]);
		}
		i++;
	}
	return (0);
}
