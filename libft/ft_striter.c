/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:23:51 by wvaara            #+#    #+#             */
/*   Updated: 2021/04/21 12:10:23 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *str, void (*f)(char *))
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			f(&str[i]);
			i++;
		}
	}
}