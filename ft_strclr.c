/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:12:06 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:27:19 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	if (s && *s != '\0')
	{
		*s = '\0';
		ft_strclr(s + 1);
	}
}
