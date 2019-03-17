/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:02:13 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/17 13:26:03 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	s_process(void)
{
	char	*s;
	int		i;
	int		a;

	s = va_arg(g_ap, char*);
	if (!s)
	{
		ft_putstr("(null)");
		g_printed += 6;
		return ;
	}
	if (g_a.flags[3] == '-')
	{
		ft_putnstr(s, g_a.prec);
		a = ft_strnlen(s, g_a.prec);
		g_printed += a;
		i = g_a.width - a;
		while (i > 0)
		{
			PRINT(' ');
			i--;
		}
	}
	else
	{
		a = ft_strnlen(s, g_a.prec);
		g_printed += a;
		i = g_a.width - a;
		while (i > 0)
		{
			PRINT(' ');
			i--;
		}
		ft_putnstr(s, g_a.prec);
	}
}
