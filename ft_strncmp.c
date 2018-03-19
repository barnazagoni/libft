/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:34:25 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/12 16:15:53 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = -1;
	while (++i < (int)n && *(s1 + i) == *(s2 + i) && *(s2 + i) != '\0')
	{
	}
	if (i == (int)n)
		i--;
	return ((unsigned char)s1[i] - s2[i]);
}