/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:58:33 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/24 16:02:47 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc <= 1)
	{
		printf("No arguements provided.\n");
		return (0);
	}
	while (i >= 1)
	{
		printf("%s\n", argv[i]);
		i--;
	}
	return (0);
}
