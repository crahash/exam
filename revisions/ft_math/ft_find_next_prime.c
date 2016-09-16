/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 14:08:51 by amarzial          #+#    #+#             */
/*   Updated: 2016/09/02 14:21:44 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int current;
	int max;
	int isprime;

	isprime = 0;
	if (nb == 1 || nb <= 0)
		return (2);
	if (nb == 2 || nb == 3)
		return (nb);
	while (!isprime)
	{
		isprime = 1;
		current = 2;
		max = nb / 2;
		while (current <= max)
		{
			if (nb % current == 0)
				isprime = 0;
			current += 1;
		}
		if (!isprime)
			nb += 1;
	}
	return (nb);
}
