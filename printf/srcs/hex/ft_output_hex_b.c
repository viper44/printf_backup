/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_octet.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:00:46 by msemenov          #+#    #+#             */
/*   Updated: 2018/01/29 11:00:51 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

static int 	ft_l(t_data *data, va_list ptr)
{
	char *point_string;

	point_string = unsigned_itoa_base((va_arg(ptr,unsigned long int)), 16);
	if (data->hash == 1 && point_string[0] != '0')
		point_string = ft_hash_hex_b(point_string);
	if (point_string[0] == '-')
		data->negative = 1;
	if (data->minus == 1)
		ft_aligning_number_sleva_octet(point_string, data);
	else
		ft_aligning_number_sprava_octet(point_string, data);
	return (1);
}

static int 	ft_ll(t_data *data, va_list ptr)
{
	char *point_string;

	point_string = unsigned_itoa_base((va_arg(ptr,unsigned long long int)), 16);
	if (data->hash == 1 && point_string[0] != '0')
		point_string = ft_hash_hex_b(point_string);
	if (point_string[0] == '-')
		data->negative = 1;
	if (data->minus == 1)
		ft_aligning_number_sleva_octet(point_string, data);
	else
		ft_aligning_number_sprava_octet(point_string, data);
	return (1);
}

static int 	ft_h(t_data *data, va_list ptr)
{
	unsigned int d;
	char *point_string;

	d = va_arg(ptr, int);
	d = (unsigned short)d;
	point_string = unsigned_itoa_base(d, 16);
	if (data->hash == 1 && point_string[0] != '0')
		point_string = ft_hash_hex_b(point_string);
	if (point_string[0] == '-')
		data->negative = 1;
	if (data->minus == 1)
		ft_aligning_number_sleva_octet(point_string, data);
	else
		ft_aligning_number_sprava_octet(point_string, data);
	return (1);
}

static int 	ft_hh(t_data *data, va_list ptr)
{
	unsigned int d;
	char *point_string;

	d = va_arg(ptr, int);
	d = (unsigned char)d;
	point_string = unsigned_itoa_base(d, 16);
	if (data->hash == 1 && point_string[0] != '0')
		point_string = ft_hash_hex_b(point_string);
	if (point_string[0] == '-')
		data->negative = 1;
	if (data->minus == 1)
		ft_aligning_number_sleva_octet(point_string, data);
	else
		ft_aligning_number_sprava_octet(point_string, data);
	return (1);
}

void	ft_output_hex_b(t_data *data, va_list ptr)
{
	unsigned int d;
	char *point_string;

	if ((data->ll == 1 || data->z == 1) && (ft_ll(data, ptr)))
		return ;
	else if ((data->l == 1) && (ft_l(data, ptr)))
		return ;
	else if ((data->hh == 1) && (ft_hh(data, ptr)))
		return ;
	else if ((data->h == 1) && (ft_h(data, ptr)))
		return ;
	else
	{
		d = va_arg(ptr,unsigned int);
		point_string = unsigned_itoa_base(d, 16);
		if (data->hash == 1)
			point_string = ft_hash_hex_b(point_string);
		if (point_string[0] == '-')
		data->negative = 1;
	if (data->minus == 1)
		ft_aligning_number_sleva_octet(point_string, data);
	else
		ft_aligning_number_sprava_octet(point_string, data);
	}
}