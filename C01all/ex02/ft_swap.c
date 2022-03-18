/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 08:51:11 by fguy              #+#    #+#             */
/*   Updated: 2021/07/19 09:09:00 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a = 1;
	int	b = 2;
	int	*ptra = &a;
	int	*ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("%d %d", *ptra, *ptrb);
	return (0);
}
