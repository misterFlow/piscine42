/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:46:13 by fguy              #+#    #+#             */
/*   Updated: 2021/07/19 12:52:02 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	printf("%d %d", *a, *b);
}
