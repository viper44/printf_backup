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

char *ft_hash_hex_b(char *output)
{
	char *hash;
	char *ret;
	if (output[0] != '0')
	{
		hash = ft_strnew(2);
		hash[0] = '0';
		hash[1] = 'X';
		ret = ft_strjoin(hash, output);
		free (output);
		free (hash);
		return (ret);
	}
	else
	{
		return (output);
	}
}