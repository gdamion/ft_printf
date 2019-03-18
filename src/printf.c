/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:44:37 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/18 10:07:05 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static int	g_i;

void		arg_process(void)
{
	(g_a.type == 'c') ? c_process() : 0;
	(g_a.type == 's') ? s_process() : 0;
	(g_a.type == 'p') ? p_process() : 0;
	(g_a.type == 'd' || g_a.type == 'i') ? d_i_process() : 0;
	(g_a.type == 'o') ? o_process() : 0;
	(g_a.type == 'u') ? u_process() : 0;
	(g_a.type == 'x') ? x_process(0) : 0;
	(g_a.type == 'X') ? x_process(1) : 0;
	(g_a.type == 'f') ? f_process() : 0;
	(g_a.type == '%') ? proc_process() : 0;
}

void		add_flags(char **f)
{
	g_i++;
	while (1)
	{
		if ((*f)[g_i] == '0')
			g_a.flags[0] = (*f)[g_i];
		else if ((*f)[g_i] == ' ')
			g_a.flags[1] = (*f)[g_i];
		else if ((*f)[g_i] == '+')
			g_a.flags[2] = (*f)[g_i];
		else if ((*f)[g_i] == '-')
			g_a.flags[3] = (*f)[g_i];
		else if ((*f)[g_i] == '#')
			g_a.flags[4] = (*f)[g_i];
		else
			break ;
		g_i++;
	}
}

void		add_width(char **f)
{
	if ((g_a.width = ft_atoi(&((*f)[g_i]))))
		while ('0' <= (*f)[g_i] && (*f)[g_i] <= '9')
			g_i++;
	else if ((*f)[g_i] == '*')
	{
		g_a.width = va_arg(g_ap, int);
		g_i++;
	}
}

void		add_prec(char **f)
{
	if ((*f)[g_i] == '.')
	{
		g_i++;
		if ((g_a.prec = ft_atoi(&((*f)[g_i]))))
			while ('0' <= (*f)[g_i] && (*f)[g_i] <= '9')
				g_i++;
		else if ((*f)[g_i] == '*')
		{
			g_a.prec = va_arg(g_ap, int);
			g_i++;
		}
		else if ((*f)[g_i] == '0')
		{
			g_a.prec = 0;
			g_i++;
		}
		else
			g_a.prec = 0;
	}
}

void		add_length(char **f)
{
	if ((*f)[g_i] == 'L')
	{
		g_a.length[0] = 'L';
		g_i++;
	}
	else if ((*f)[g_i] == 'l')
	{
		g_a.length[0] = 'l';
		if ((*f)[g_i + 1] == 'l')
		{
			g_a.length[1] = 'l';
			g_i++;
		}
		g_i++;
	}
	else if ((*f)[g_i] == 'h')
	{
		g_a.length[0] = 'h';
		if ((*f)[g_i + 1] == 'h')
		{
			g_a.length[1] = 'h';
			g_i++;
		}
		g_i++;
	}
}

void		clean_all(void)
{
	ft_bzero(g_a.flags, sizeof(char) * 5);
	g_a.width = 0;
	g_a.prec = -1;
	ft_bzero(g_a.length, 3);
	g_a.type = 0;
}

void		arg_found(char **f)
{
	clean_all();
	add_flags(f);
	add_width(f);
	add_prec(f);
	add_length(f);
	if ((*f)[g_i] == 'c' || (*f)[g_i] == 's' || (*f)[g_i] == 'p' ||
		(*f)[g_i] == 'd' || (*f)[g_i] == 'i' || (*f)[g_i] == 'o' ||
		(*f)[g_i] == 'u' || (*f)[g_i] == 'x' || (*f)[g_i] == 'X' ||
		(*f)[g_i] == 'f' || (*f)[g_i] == '%')
	{
		g_a.type = (*f)[g_i];
		g_i++;
	}
	arg_process();
}

int			ft_printf(const char *restrict format, ...)
{
	char *f;

	f = (char*)format;
	g_printed = 0;
	va_start(g_ap, format);
	g_i = 0;
	while (f[g_i] != '\0')
	{
		if (f[g_i] == '%')
			arg_found(&f);
		else
		{
			ft_putchar(f[g_i++]);
			g_printed++;
		}
	}
	va_end(g_ap);
	return (g_printed);
}
