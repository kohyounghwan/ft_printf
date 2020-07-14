/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:31:35 by ykoh              #+#    #+#             */
/*   Updated: 2020/07/12 19:15:26 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	size_t	str_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc((str_len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(str + ft_strlcpy(str, s1, str_len + 1), s2, str_len + 1);
	free((void *)s1);
	free((void *)s2);
	return (str);
}
