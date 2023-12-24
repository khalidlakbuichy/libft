/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klakbuic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:05:29 by klakbuic          #+#    #+#             */
/*   Updated: 2023/11/07 11:00:55 by klakbuic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	i = 0;
	if (start > slen)
		len = 0;
	else if (len > slen || (start + len > slen))
		len = slen - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (len && len-- > 0)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
