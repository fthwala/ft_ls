/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 12:49:06 by fthwala           #+#    #+#             */
/*   Updated: 2017/09/09 11:43:13 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src2;

	i = 0;
	src2 = (const char*)src;
	dest = (char*)dst;
	while (i < n)
	{
		dest[i] = src2[i];
		i++;
	}
	return (dest);
}
