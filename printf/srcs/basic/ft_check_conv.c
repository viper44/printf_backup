/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:29:49 by msemenov          #+#    #+#             */
/*   Updated: 2018/01/23 15:29:51 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void	ft_check_conv(const char *format, t_data *data,va_list ptr)
{
	if (*format == '%')
		write(1, "%", 1);
	if (*format == 'd' || *format == 'i' || *format == 'D')
		ft_output_number(data, ptr);
	if (*format == 'o')
		ft_output_octet(data,ptr);
	if (*format == 'x')
		ft_output_hex(data, ptr);
	if (*format == 'X')
		ft_output_hex_b(data, ptr);
	if (*format == 'u')
		ft_output_un_int(data, ptr);
	if (*format == 'c')
		ft_output_char(data, ptr);
}