/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_pow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:22:14 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 17:28:22 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

int	math_pow(int nb, int exposant)
{
	int	res;

	res = 1;
	while (exposant > 0)
	{
		res = res * nb;
		exposant--;
	}
	return (res);
}
