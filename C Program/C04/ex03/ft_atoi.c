/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:32:14 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/19 13:32:21 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
		c == '\v' || c == '\f' || c == '\r');
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (is_whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_numeric(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*
int	main(void)
{
	char	input[] = "	-12345ab";
	int	result = ft_atoi(input);

	printf("Result: %d\n", result);
	return (0);
}
*/
