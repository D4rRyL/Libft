/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:03:14 by chbechet          #+#    #+#             */
/*   Updated: 2016/11/20 04:21:18 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *str)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
	}
}
