/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 13:38:21 by amarzial          #+#    #+#             */
/*   Updated: 2016/09/02 14:06:40 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int current;
	int max;

	if (nb == 1 || nb <= 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	current = 2;
	max = nb / 2;
	while (current <= max)
	{
		if (nb % current == 0)
			return (0);
		current += 1;
	}
	return (1);
}
