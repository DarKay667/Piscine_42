/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprelis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:54:52 by tprelis           #+#    #+#             */
/*   Updated: 2024/08/19 14:32:53 by tprelis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	str = 0;
	i = 0;
	if (src == 0)
	{
		return (0);
	}
	len = ft_strlen(src);
	str = malloc(sizeof(char) * (len + 1));
	if (str == 0)
	{
		return (0);
	}
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	int	i;
	char	*src;
	char	*str;

	i = 0;
	src = "Bienvenue a 42!";
	str = ft_strdup(src);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	free(str);
	str = 0;
}*/
