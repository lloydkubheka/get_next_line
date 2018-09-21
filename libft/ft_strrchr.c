/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:13:55 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/12 16:18:48 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;

	src = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			src = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (src);
}
