/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:13:56 by fguy              #+#    #+#             */
/*   Updated: 2021/07/28 21:22:41 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{	
	int	res;

	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}

/*int	main(void)
{

	int	x;

	x = 12;
	printf("%d\n", ft_iterative_factorial(x));
	return (0);
}*/
