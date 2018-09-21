/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 17:29:19 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/12 15:13:13 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		while (i < len)
		{
			if (d[i] != s[i])
				d[i] = s[i];
			i++;
		}
	return (d);
}
