/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:23:36 by darkay            #+#    #+#             */
/*   Updated: 2024/08/10 21:58:56 by darkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
		{
			return (dest);
		}
		i++;
	}
}

/*int	main(void)
{
	char	i;
	char	j;

	i = '4';
	j = '2';
	ft_strcpy(&i, &j);
	printf("%c", i);
}*/
