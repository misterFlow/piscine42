/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex001ligne.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:23:34 by fguy              #+#    #+#             */
/*   Updated: 2021/07/18 15:44:20 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	tab[4] = {0, 1 ,2 ,3};
	int	n;

	n = 4;
	for (int i = 0; i < n; i++)
	{;
		printf("%d", tab[i]);
	}
}