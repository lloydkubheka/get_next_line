/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:03:07 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/13 10:26:39 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ds;
	const char	*sr;
	int			i;

	sr = src;
	ds = dst;
	i = 0;
	while (n > 0)
	{
		ds[i] = sr[i];
		i++;
		n--;
	}
	return (dst);
}
