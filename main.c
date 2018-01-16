/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/16 15:25:48 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%+10.5d\", 4242)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%+10.5d\n", 4242));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%+10.5d\n", 4242));
	ft_putendl("\n\nprintf(\"%+d\", 0)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%+d\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%+d\n", 0));
}
