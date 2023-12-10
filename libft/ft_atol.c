/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:53:00 by npremont          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:05 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_init(int *i, int *sign, long long int *nb, long long int *last)
{
	*i = 0;
	*sign = 1;
	*nb = 0;
	*last = 0;
}

long int	ft_atol(const char *nptr)
{
	int				i;
	int				sign;
	long long int	nb;
	long long int	last;

	ft_init(&i, &sign, &nb, &last);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i++] - 48);
		if (last > nb)
			return (2147483648);
		last = nb;
	}
	return (nb * sign);
}
