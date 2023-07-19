/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatice <hatice@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:33:18 by hatice            #+#    #+#             */
/*   Updated: 2023/07/19 08:09:11 by hatice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexprintf(unsigned int nbr, char format)
{
	char	*arr;
	int		count;

	count = 0;
	arr = "0123456789abcdef";
	if (format == 'X')
		arr = "0123456789ABCDEF";
	if (nbr >= 16)
		count += ft_hexprintf((nbr / 16), format);
	count += ft_putchar(arr[nbr % 16]);
	return (count);
}
