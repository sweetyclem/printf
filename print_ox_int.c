/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ox_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 09:30:57 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_o_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(*va, long long int);
	char_written += ft_uint_len_base(nb, 8);
	char_written += print_pound(format, nb);
	char_written += print_width(format, char_written);
	ft_put_longlong_base(nb, 8);
	return (char_written);
}

int	print_cap_o_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (unsigned long)va_arg(*va, long);
	char_written += ft_uint_len_base(nb, 8);
	char_written += print_pound(format, nb);
	char_written += print_width(format, char_written);
	ft_putlong_base(nb, 8);
	return (char_written);
}

int	print_x_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;
	char					c;

	c = format.conversion;
	nb = (unsigned long long int)va_arg(*va, unsigned long long int);
	char_written += print_pound(format, nb);
	if (c == 'x')
		char_written += ft_print_u_l_hex(nb, "0123456789abcdef");
	else if (c == 'X')
		char_written += ft_print_u_l_hex(nb, "0123456789ABCDEF");
	return (char_written);
}

int	print_cap_x_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;
	char					c;

	c = format.conversion;
	nb = (unsigned long long int)va_arg(*va, unsigned long long int);
	char_written += print_pound(format, nb);
	if (c == 'x')
		char_written += ft_print_u_l_hex(nb, "0123456789abcdef");
	else if (c == 'X')
		char_written += ft_print_u_l_hex(nb, "0123456789ABCDEF");
	return (char_written);
}
