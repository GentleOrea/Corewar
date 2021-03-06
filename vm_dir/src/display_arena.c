/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_arena.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:08:30 by ygarrot           #+#    #+#             */
/*   Updated: 2018/03/01 15:46:11 by gmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

void	dump_arena(t_vm *vm)
{
	int i;

	i = -1;
	ft_printf("0x0000 : ");
	while (++i < MEM_SIZE)
	{
		if (i && !(i % 32))
			ft_printf("\n%#.4x : ", i);
		ft_printf("%.2x ", vm->map[i]);
	}
	ft_printf("\n");
}
