/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:58:25 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/30 20:31:07 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_substr returns a substring,
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	total_size;

	if (str == NULL)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	total_size = ft_strlen(&str[start]);
	if (total_size < len)
		len = total_size;
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &str[start], len + 1);
	return (substr);
}
