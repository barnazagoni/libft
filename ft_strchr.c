/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 14:48:35 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/10 13:38:38 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (*(s + i) != c && *(s + i) != '\0')
		i++;
	if (s[i] == '\0' && c != '\0')
		return (NULL);
	else
		return (char*)(s + i);
}
