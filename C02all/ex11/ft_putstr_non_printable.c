/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 15:42:53 by fguy              #+#    #+#             */
/*   Updated: 2021/07/21 20:03:44 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	hex[16];

	hex[] = "0123456789abcdef";
	if (c >= 16)
	{
		ft_putchar(hex[c / 16]);
	}
	else
	{
		ft_putchar('0');
	}
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	char	s1[] = "This is printable";
	char	s2[] = "This \n is not printable";

	ft_putstr_non_printable(s1);
	ft_putchar('\n');
	ft_putstr_non_printable(s2);
	return (0);
}*/
