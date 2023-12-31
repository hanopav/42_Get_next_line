/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:14:34 by phanosek          #+#    #+#             */
/*   Updated: 2023/07/03 20:15:13 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	if (a == NULL)
		return (0);
	while (a[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	while (s1[i] != '\0')
		str[a++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		str[a++] = s2[i++];
	str[a] = '\0';
	free(s1);
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == 0)
		return (NULL);
	while (str[i] != '\0' && str[i] != c)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}
