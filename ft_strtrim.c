/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:02:27 by guilhfer          #+#    #+#             */
/*   Updated: 2022/05/03 16:59:30 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	end;

	if (!str || !set)
	{
		return (NULL);
	}
	while (*str && ft_strchr(set, *str))
		str++;
	end = ft_strlen(str);
	while (end && ft_strrchr(set, str[end]))
		end--;
	return (ft_substr(str, 0, end + 1));
}
