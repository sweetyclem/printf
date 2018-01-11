/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:29:20 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 07:51:26 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void			ft_put_u_long(unsigned long nb)
{
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_put_u_long(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}