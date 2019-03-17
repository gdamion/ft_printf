/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_handle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:02:04 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/17 13:48:16 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	hex_digit(int v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('a' + v - 10);
}

void	address_hex(void *p0, char **addr)
{
	int			i;
	int			j;
	long long	p;

	p = (long long)p0;
	if (!p0)
	{
		*addr = ft_strjoin("", "0x0");
		g_printed += 3;
		return ;
	}
	ALLOC(*addr, char*, sizeof(char) * 15);
	(*addr)[14] = '\0';
	(*addr)[0] = '0';
	(*addr)[1] = 'x';
	g_printed += 2;
	i = ((sizeof(p) << 3) - 4 * 5);
	j = 2;
	while (j < 14)
	{
		g_printed++;
		(*addr)[j] = hex_digit((p >> i) & 0xf);
		i -= 4;
		j++;
	}
}

void	p_process(void)
{
	void	*p;
	int		i;
	char	*addr;

	p = va_arg(g_ap, void*);
	address_hex(p, &addr);
	if (g_a.width > ft_strlen(addr))
	{
		i = g_a.width - ft_strlen(addr);
		if (g_a.flags[3] == '-')
		{
			ft_putstr(addr);
			while (i > 0)
			{
				PRINT(' ');
				i--;
			}
		}
		else
		{
			while (i > 0)
			{
				PRINT(' ');
				i--;
			}
			ft_putstr(addr);
		}
	}
	else
		ft_putstr(addr);
	free(addr);
}
