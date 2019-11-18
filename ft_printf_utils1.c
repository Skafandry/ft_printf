/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zaou <aez-zaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:58:11 by aez-zaou          #+#    #+#             */
/*   Updated: 2019/11/16 16:18:17 by aez-zaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *s)
{
	int i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	int				i;
	unsigned int	num;
	unsigned int	n1;
	unsigned int	n2;

	i = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n2 = -n;
	}
	else
		n2 = n;
	n1 = n2;
	while (n1 /= 10)
		i *= 10;
	while (i)
	{
		num = n2 / i;
		num = (num % 10) + 48;
		ft_putchar(num);
		i /= 10;
	}
}

int		handling(t_info infos, va_list args)
{
	int i;

	i = 0;
	if (infos.conversion == 's')
		i += handle_string(infos, args);
	else if (infos.conversion == 'd' || infos.conversion == 'i')
		i += handle_decimal(infos, args);
	return (i);
}