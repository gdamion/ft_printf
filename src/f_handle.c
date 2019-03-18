/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:17:51 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/18 17:01:49 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static long double	g_f;
static char			*g_num;
static int			g_pre;
static int			g_numlen;
static int			g_n;

static void	f_minflag(void)
{
	if (g_a.flags[2] == '+' && g_num[0] != '-')
	{
		PRINT('+');
		g_pre = 1;
	}
	else if (g_a.flags[1] == ' ' && g_num[0] != '-')
	{
		PRINT(' ');
		g_pre = 1;
	}
	else
		g_pre = 0;
	ft_putstr(g_num);
	g_n = g_a.width - (g_numlen + g_pre);
	while (g_n > 0)
	{
		PRINT(' ');
		g_n--;
	}
}

static void	f_zeroflag(void)
{
	if (g_a.flags[2] == '+' && g_num[0] != '-')
	{
		PRINT('+');
		g_pre = 1;
	}
	else if (g_a.flags[1] == ' ' && g_num[0] != '-')
	{
		PRINT(' ');
		g_pre = 1;
	}
	else
		g_pre = 0;
	g_n = g_a.width - (g_numlen + g_pre);
	while (g_n > 0)
	{
		PRINT('0');
		g_n--;
	}
	ft_putstr(g_num);
}

static void	f_noflag(void)
{
	if (g_a.flags[1] == ' ' && g_num[0] != '-')
		g_pre = 1;
	else if (g_a.flags[2] == '+' && g_num[0] != '-')
		g_pre = 1;
	else
		g_pre = 0;
	g_n = g_a.width - (g_numlen + g_pre);
	while (g_n > 0)
	{
		PRINT(' ');
		g_n--;
	}
	if (g_a.flags[2] == '+' && g_num[0] != '-')
	{
		PRINT('+');
	}
	else if (g_a.flags[1] == ' ' && g_num[0] != '-')
	{
		PRINT(' ');
	}
	ft_putstr(g_num);
}

void		f_process(void)
{
	if (g_a.length[0] == 'L')
		g_f = va_arg(g_ap, long double);
	else
		g_f = va_arg(g_ap, double);
	if (ft_is_inf(g_f) == 1)
	{
		ft_putstr("inf");
		return ;
	}
	else if (ft_is_inf(g_f) == -1)
	{
		ft_putstr("-inf");
		return ;
	}
	else if (ft_is_nan(g_f) == 1)
	{
		ft_putstr("nan");
		return ;
	}
	in_double(&g_num, g_f);
	g_printed += (g_numlen = ft_strlen(g_num));
	if (g_a.flags[3] == '-')
		f_minflag();
	else if (g_a.flags[0] == '0')
		f_zeroflag();
	else
		f_noflag();
	free(g_num);
}
