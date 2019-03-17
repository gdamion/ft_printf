/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_handle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:02:22 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/17 18:03:07 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static int	ft_cnt_hex(unsigned long long o)
{
	int i;

	i = 1;
	while (o /= 16)
		i++;
	return (i);
}

void		in_hexagonal(char **dec, unsigned long long o, int var)
{
	int		len;
	int		i;
	char	reg;

	len = ft_cnt_hex(o);
	ALLOC(*dec, char*, sizeof(char) * (len + 1));
	(*dec)[len] = '\0';
	if (var)
		reg = 'a';
	else
		reg = 'A';
	i = len - 1;
	while (o / 16)
	{
		if ((o % 16) < 10)
			(*dec)[i] = o % 16 + '0';
		else
			(*dec)[i] = o % 16 - 10 + reg;
		o /= 16;
		i--;
	}
	if ((o % 16) < 10)
		(*dec)[i] = o % 16 + '0';
	else
		(*dec)[i] = o % 16 - 10 + reg;
}

void		x_process(int var)
{
	unsigned long long	x;
	char				*num;
	int					pre;
	int					numlen;
	int					zeronum;
	int					i;
	int					n;

	ulong_init(&x);
	in_hexagonal(&num, x, var);
	numlen = ft_strlen(num);
	if (!x && !g_a.prec && !g_a.width)
		return ;
	if (g_a.flags[3] == '-')
	{
		if (g_a.flags[4] == '#' && x != 0)
		{
			var? ft_putstr("0X") : ft_putstr("0x");
			g_printed += 2;
			pre = 2;
		}
		else
			pre = 0;
		zeronum = g_a.prec - numlen;
		if (zeronum > 0)
		{
			i = zeronum;
			while (i > 0)
			{
				PRINT('0');
				i--;
			}
		}
		else
			zeronum = 0;
		if (!(g_a.prec == 0 && x == 0))
		{
			ft_putstr(num);
			g_printed += numlen;
		}
		else
		{
			PRINT(' ');
		}
		n = g_a.width - (pre + zeronum + numlen);
		while (n > 0)
		{
			PRINT(' ');
			n--;
		}
	}
	else if (g_a.flags[0] == '0' && g_a.prec == -1)
	{
		if (g_a.flags[4] == '#' && x != 0)
		{
			var? ft_putstr("0X") : ft_putstr("0x");
			g_printed += 2;
			pre = 2;
		}
		else
			pre = 0;
		zeronum = g_a.width - (pre + numlen);
		if (zeronum > 0)
			while (zeronum > 0)
			{
				PRINT('0');
				zeronum--;
			}
		ft_putstr(num);
		g_printed += numlen;
	}
	else
	{
		if (g_a.flags[4] == '#' && x != 0)
			pre = 2;
		else
			pre = 0;
		if (g_a.prec > numlen)
			zeronum = g_a.prec - numlen;
		else
			zeronum = 0;
		n = g_a.width - (pre + zeronum + numlen);
		while (n > 0)
		{
			PRINT(' ');
			n--;
		}
		if (pre && x == 0)
		{
			g_printed += 2;
			ft_putstr("  ");
		}
		else if (pre)
		{
			var? ft_putstr("0X") : ft_putstr("0x");
			g_printed += 2;
		}
		while (zeronum > 0)
		{
			PRINT('0');
			zeronum--;
		}
		if (!(g_a.prec == 0 && x == 0))
		{
			g_printed += numlen;
			ft_putstr(num);
		}
		else
		{
			PRINT(' ');
		}
	}
	free(num);
}
