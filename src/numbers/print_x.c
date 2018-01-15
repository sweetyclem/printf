/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 15:28:57 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_x_longlong(int char_written, t_format format, unsigned long long nb)
{
	int	precision_to_write;

	precision_to_write = 0;
	char_written += pound_length(format, nb);
	if (!(format.precision == -1 && nb == 0))
		char_written += ft_hex_len(nb);
	if (format.precision > 0)
		precision_to_write = format.precision - ft_longlong_len(nb);
	char_written += print_width(format, char_written +
	(precision_to_write > 0 ? precision_to_write : 0));
	print_pound(format, nb);
	char_written += print_zero_padding(format, char_written);
	char_written += print_precision(format, nb);
	if (!(format.precision == -1 && nb == 0))
	{
		if (format.conversion == 'x')
			ft_print_u_hex(nb, "0123456789abcdef");
		else if (format.conversion == 'X')
			ft_print_u_hex(nb, "0123456789ABCDEF");
	}
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
