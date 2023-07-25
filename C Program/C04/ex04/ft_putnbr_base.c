/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:17:31 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/16 14:18:03 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_putnbr_base(-(nbr / base_len), base);
			ft_putchar(base[-(nbr % base_len)]);
			return ;
		}
		nbr = -nbr;
	}
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
	}
	else
		ft_putchar(base[nbr]);
}

/*
int	main(void)
{
	ft_putnbr_base(17, "01");
	printf("\n");
	ft_putnbr_base(17, "poneyvif");
	printf("\n");
	ft_putnbr_base(17, "0123456789");
	printf("\n");
	ft_putnbr_base(17, "0123456789abcdef");
}
*/
