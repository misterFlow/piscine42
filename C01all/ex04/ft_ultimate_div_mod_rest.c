/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_rest.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 10:40:29 by fguy              #+#    #+#             */
/*   Updated: 2021/07/19 10:51:59 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod_rest(int *a, int *b)
{
	int	mod;
	int	temp;
	double	modfloat;
	double	rest;

	temp = *a;
	*a = *a / *b;
	mod = temp % *b;
	modfloat = temp % *b;
	rest = modfloat / *b;
	printf("a=%d b=%d mod=%d rest=%.3f", temp, *b, mod, rest);
}

int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 3;
	ft_ultimate_div_mod_rest(&a, &b);
	return (0);
}
