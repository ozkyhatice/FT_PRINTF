/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatice <hatice@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:32:59 by hatice            #+#    #+#             */
/*   Updated: 2023/07/17 19:33:00 by hatice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_hexprintf(unsigned int nbr, char format);
int	ft_pointer(size_t p);
int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putunsignednbr(unsigned int nbr);

#endif