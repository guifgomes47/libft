/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:05:43 by guilhfer          #+#    #+#             */
/*   Updated: 2022/05/19 17:02:53 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The atoi() function converts the int value to a converted char pointer */

static int	ft_digits(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		sign;
	int		len;

	len = ft_digits(n);
	dest = ft_calloc(sizeof(char), len + 1);
	if (!dest)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(dest, "-2147483648", 11));
	sign = 1;
	if (n < 0)
		sign = -1;
	n *= sign;
	while (--len >= 0)
	{
		dest[len] = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
		dest[0] = '-';
	return (dest);
}
