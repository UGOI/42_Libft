/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:25 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/15 23:23:00 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"
#include<stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t		str_len;
	const char	*lstr;

	str_len = ft_strlen(str);
	lstr = str + (str_len);
	while (str_len-- + 1)
	{
		if (*lstr == (char) c)
			return ((char *) lstr);
		lstr--;
	}
	return (NULL);
}
