/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 17:37:46 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:47:46 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *s)
{
	if (s && *s != '\0')
	{
		write(1, s, 1);
		ft_putstr(s + 1);
	}
}
