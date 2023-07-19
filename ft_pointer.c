/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatice <hatice@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:32:49 by hatice            #+#    #+#             */
/*   Updated: 2023/07/19 08:18:01 by hatice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(size_t p)
{
	char	*arr;
	int		count;

	count = 0;
	arr = "0123456789abcdef";
	if (p >= 16)
		count += ft_pointer(p / 16);
	count += ft_putchar(arr[p % 16]);
	return (count);
}
