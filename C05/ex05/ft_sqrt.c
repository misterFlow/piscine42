/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:49:57 by fguy              #+#    #+#             */
/*   Updated: 2021/07/29 11:14:39 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb > 2147395600)
		return (0);
	while ((i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}

/*int	main(void)
{
	int x;

	x = 2147395601;
	printf("%d\n", ft_sqrt(x));
	return (0);
}*/
