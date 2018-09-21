/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:27:01 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/12 14:56:44 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	str = (unsigned char *)dst;
	str1 = (unsigned char *)src;
	while (i < n)
	{
		str[i] = str1[i];
		if (str1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
