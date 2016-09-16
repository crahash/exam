/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 13:02:11 by amarzial          #+#    #+#             */
/*   Updated: 2016/09/02 13:37:50 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int number)
{
	int n;
	int n1;
	int temp;

	if (number < 0)
		return (0);
	n = 1;
	n1 = ((n + number / n) >> 1);
	temp = n1 - n;
	if (temp < 0)
		temp = -temp;
	while (temp > 1)
	{
		n = n1;
		n1 = ((n + number / n) >> 1);
		temp = n1 - n;
		if (temp < 0)
			temp = -temp;
	}
	while (n1 * n1 > number)
		n1--;
	if (n1 * n1 < number)
		return (0);
	return (n1);
}
