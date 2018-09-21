/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:13:15 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/13 18:16:06 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	char		*str;

	start = 0;
	if (!s)
		return (NULL);
	while (s[start] != '\0' && (s[start] == ' ' || s[start] == ',' ||
				s[start] == '\t' || s[start] == '\n'))
		start++;
	if (!(str = ((char *)malloc(sizeof(char) * start + 1))))
		return (str);
	end = ft_strlen((char*)s);
	while ((s[end - 1] == '\t' || s[end - 1] == ' ' || s[end - 1] == '\n'
				|| s[end - 1] == ',') && (start < end))
		end--;
	str = ft_strsub(s, start, end - start);
	if (str)
		return (str);
	return (NULL);
}
