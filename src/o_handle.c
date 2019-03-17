/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_handle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:02:00 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/17 18:14:40 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static unsigned long long	g_o;
static char					*g_num;
static int					g_numlen;
static int					g_zeronum;
static int					g_n;

static void					in_octave(char **dec, unsigned long long o)
{
	int len;
	int i;

	len = 1;
	while (o /= 8)
		len++;
	ALLOC(*dec, char*, sizeof(char) * (len + 1));
	(*dec)[len] = '\0';
	i = len - 1;
	while (o / 8)
	{
		(*dec)[i] = o % 8 + '0';
		o /= 8;
		i--;
	}
	(*dec)[i] = o % 8 + '0';
}

static void					o_minflag(void)
{
	g_zeronum = g_a.prec - g_numlen;
	if (g_zeronum > 0)
	{
		g_n = g_zeronum;
		while (g_n > 0)
		{
			PRINT('0');
			g_n--;
		}
	}
	else if (g_a.flags[4] == '#' && g_o)
	{
		PRINT('0');
		g_zeronum = 1;
	}
	else
		g_zeronum = 0;
	if (!(g_a.prec == 0 && g_o == 0))
	{
		ft_putstr(g_num);
		g_printed += g_numlen;
	}
	else
	{
		PRINT(' ');
	}
	g_n = g_a.width - (g_zeronum + g_numlen);
	while (g_n > 0)
	{
		PRINT(' ');
		g_n--;
	}
}

static void					o_zeroflag(void)
{
	g_zeronum = g_a.width - g_numlen;
	if (g_zeronum > 0)
		while (g_zeronum > 0)
		{
			PRINT('0');
			g_zeronum--;
		}
	else if (g_a.flags[4] == '#' && g_o)
	{
		PRINT('0');
	}
	ft_putstr(g_num);
	g_printed += g_numlen;
}

static void					o_noflag(void)
{
	if (g_a.prec > g_numlen)
		g_zeronum = g_a.prec - g_numlen;
	else if (g_a.flags[4] == '#' && g_o)
		g_zeronum = 1;
	else
		g_zeronum = 0;
	g_n = g_a.width - (g_zeronum + g_numlen);
	while (g_n-- > 0)
	{
		PRINT(' ');
	}
	while (g_zeronum > 0)
	{
		PRINT('0');
		g_zeronum--;
	}
	if (!(g_a.prec == 0 && g_o == 0))
	{
		g_printed += g_numlen;
		ft_putstr(g_num);
	}
	else
	{
		PRINT(' ');
	}
}

void						o_process(void)
{
	ulong_init(&g_o);
	if (!g_o && !g_a.prec && !g_a.width)
	{
		if (g_a.flags[4] == '#')
		{
			PRINT('0');
		}
		return ;
	}
	in_octave(&g_num, g_o);
	g_numlen = ft_strlen(g_num);
	if (g_a.flags[3] == '-')
		o_minflag();
	else if (g_a.flags[0] == '0' && g_a.prec == -1)
		o_zeroflag();
	else
		o_noflag();
	free(g_num);
}
