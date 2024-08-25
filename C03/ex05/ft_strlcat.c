/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:20:54 by darkay            #+#    #+#             */
/*   Updated: 2024/08/13 11:03:07 by tprelis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	result;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size > len_dest)
	{
		result = len_src + len_dest;
	}
	else
	{
		result = len_src + size;
	}
	i = 0;
	while (src[i] && len_dest <= size)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (result);
}

/*int	main(void)
{
	char	dest[] = "20 caractere";
	char	src[] = "au total";
	unsigned int	i;

	i = 21;
	printf("%d\n", ft_strlcat(dest, src, i));
}*/
