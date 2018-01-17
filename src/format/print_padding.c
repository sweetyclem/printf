/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_padding.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 08:25:32 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/17 13:50:15 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_width(t_format format, int char_written)
{
	int	spaces_written;
	int	i;
	int	width;

	spaces_written = 0;
	width = format.min_width;
	i = 0;
	if (width > 0 && width > char_written && !format.minus)
	{
		i = width - char_written;
		while (i > 0)
		{
			if (ft_strchr("cDOUCsSp", format.conversion)
			&& (format.zero && (format.minus || format.precision)))
			{
				ft_putchar('0');
				spaces_written++;
			}
			else if (!format.zero || (format.conversion == 'd'
			&& format.precision && format.zero))
			{
				ft_putchar(' ');
				spaces_written++;
			}
			i--;
		}
	}
	return (spaces_written);
}

int	print_zero_padding(t_format format, int char_written)
{
	int	zeroes_written;
	int	i;

	zeroes_written = 0;
	i = 0;
	if (format.zero == 1 && (format.min_width > char_written))
	{
		i = format.min_width - char_written;
		while (i > 0)
		{
			ft_putchar('0');
			zeroes_written++;
			i--;
		}
	}
	return (zeroes_written);
}

int	print_width_minus(t_format format, int char_written)
{
	int	spaces_written;
	int	i;
	int	width;

	spaces_written = 0;
	width = format.min_width;
	i = 0;
	if (width > 0 && width > char_written && !format.zero && format.minus)
	{
		i = width - char_written;
		while (i > 0)
		{
			ft_putchar(' ');
			spaces_written++;
			i--;
		}
	}
	return (spaces_written);
}

int	print_precision(t_format format, int nb, int nb_len)
{
	int	zeroes_written;
	int	i;

	zeroes_written = 0;
	i = 0;
	if (nb < 0)
		nb_len -= 1;
	if (format.precision != -1 && format.precision > nb_len)
	{
		i = (format.precision - nb_len);
		while (i > 0)
		{
			ft_putchar('0');
			zeroes_written++;
			i--;
		}
	}
	return (zeroes_written);
}
