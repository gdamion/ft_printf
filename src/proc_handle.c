/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proc_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:02:08 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/17 17:39:42 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"


void	proc_process(void)
{
	int i;

	if (g_a.flags[3] == '-')
	{
		PRINT('%');
		i = g_a.width - 1;
		while (i > 0)
		{
			PRINT(' ');
			i--;
		}
	}
	else
	{
		i = g_a.width - 1;
		while (i > 0)
		{
			if (g_a.flags[0] == '0')
				ft_putchar('0');
			else
				ft_putchar(' ');
			g_printed++;
			i--;
		}
		PRINT('%');
	}
}
