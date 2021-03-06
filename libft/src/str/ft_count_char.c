/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:12:56 by gmonnier          #+#    #+#             */
/*   Updated: 2018/02/22 16:13:57 by gmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_char(char *str, char c)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}
