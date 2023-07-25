/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:48:12 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/25 13:02:14 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	length = 0;
	dest = (char *)malloc((length + 1) * sizeof(char));
	i = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*original = "boo";
	char	*duplicate = ft_strdup(original);

	if (duplicate != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/
