/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:29:51 by wvaara            #+#    #+#             */
/*   Updated: 2021/04/21 12:12:45 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				ret;
	char			*map;

	i = 0;
	if (!str)
		return (NULL);
	ret = ft_strlen(str);
	map = (char *)malloc(sizeof(*map) * (ret + 1));
	if (!map)
		return (NULL);
	while (str[i] != '\0')
	{
		map[i] = f(i, str[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
