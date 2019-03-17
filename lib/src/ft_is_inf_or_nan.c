/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_inf_or_nan.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 16:42:21 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/17 17:11:10 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_inf_or_nan(long double d)
{
	unsigned long y;

	y = *(((unsigned long*)(&d)));
	if (y == 0x7ff8000000000000 || y == 0xfff8000000000000)
	{
		ft_putstr("nan");
		return (1);
	}
	if (y == 0x7ff0000000000000)
	{
		ft_putstr("inf");
		return (2);
	}
	if (y == 0xfff0000000000000)
	{
		ft_putstr("-inf");
		return (3);
	}
	return (0);
}
