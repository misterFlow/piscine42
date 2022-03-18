/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:36:14 by fguy              #+#    #+#             */
/*   Updated: 2021/07/21 19:59:34 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 1;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || str[i - 1] > '9')
				if (str[i - 1] < 'A' || str[i - 1] > 'Z')
					if (str[i - 1] < 'a' || str[i - 1] > 'z')
						str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	s[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}*/
