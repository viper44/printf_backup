/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 11:17:48 by msemenov          #+#    #+#             */
/*   Updated: 2018/02/08 11:17:49 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

// static char 	*ft_precision(char *output, t_data *data)
// {
// 	char *tmp;
// 	int size_precision;
// 	char *del_me;
// 	int	i;

// 	i = 0;
// 	size_precision = data->precision - ft_strlen(output) + 2;
// 	tmp = ft_strnew(size_precision);
// 	del_me = tmp;
// 	while (i < size_precision)
// 	{
// 		tmp[i] = '0';
// 		i++;
// 	}
// 	tmp = ft_strjoin(output, tmp);
// 	free(del_me);
// 	free(output);
// 	return (tmp);
// }

// static char 	*ft_width(char *tmp, t_data *data)
// {
// 	int	size_tmp2;
// 	char	*tmp2;
// 	char	*tmp_ret;

// 	tmp2 = ft_strnew(size_tmp2 = data->width - ft_strlen(tmp));
// 	size_tmp2 -= 1;
// 	if (data->width > 0 && (data->zero == 0 || data->dot == 1))
// 		while (size_tmp2 >= 0)
// 			tmp2[size_tmp2--] = ' ';
// 	else if (data->precision == 0 && data->zero == 1 && data->dot == 0)
// 		while (size_tmp2 >= 0)
// 			tmp2[size_tmp2--] = '0';
// 	tmp_ret = ft_strjoin(tmp, tmp2);
// 	free (tmp2);
// 	free (tmp);
// 	return (tmp_ret);
// }

// void static	ft_aligning_number_sprava_hex_p (char *output, t_data *data)
// {
// 	// if (output[0] == '0' && data->dot == 1 && data->precision == 0)
// 	// 	output[0] = '\0';
// 	 if (data->precision >= (int)ft_strlen(output))
// 	 	output = ft_precision(output, data);
// 	if (data->width > (int)ft_strlen(output))
// 	{
// 		if (data->zero == 0 && data->hash == 1)
// 			output = ft_hash_hex(output);
// 		output = ft_width(output, data);
// 		// if (data->hash == 1 && data->zero == 1)
// 		// {
// 		// 	output[0] = '0';
// 		// 	output[1] = 'x';
// 		// }
// 	}
// 	ft_output(output, data);
// }


// static char *ft_hash_hex_p(char *output)
// {
// 	char *hash;
// 	char *ret;

// 		hash = ft_strnew(2);
// 		hash[0] = '0';
// 		hash[1] = 'x';
// 		ret = ft_strjoin(hash, output);
// 		free (output);
// 		free (hash);
// 		return (ret);
// }

void	ft_output_pointer(t_data *data, va_list ptr)
{
	unsigned long int d;
	char *point_string;
	int size;


	d = va_arg(ptr,unsigned long int);
	point_string = unsigned_itoa_base_sx(d, 16);
	size = ft_strlen(point_string);
	// if (point_string[0] == '0')
	// {
	// 	ft_zero(data, point_string);
	// 	return ;
	// }
	data->hash = 1;
	// if (data->zero == 1 || (data->dot == 1 && data->width > size))
	// {
	// 	ft_aligning_number_sprava_hex_p(point_string, data);
	// 	return;
	// }
	if (data->minus == 1)
		ft_aligning_pointer_sleva(point_string, data);
	else
		ft_aligning_pointer_sprava(point_string, data);
}