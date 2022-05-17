/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:09:56 by guilhfer          #+#    #+#             */
/*   Updated: 2022/05/07 22:52:27 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t nbyte)
{
	size_t			i;
	unsigned char	*zero;

	i = 0;
	zero = str;
	while (i < nbyte)
	{
		*(zero + i++) = '\0';
	}
}
