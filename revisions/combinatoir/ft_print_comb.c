/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiorgio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:47:00 by pgiorgio          #+#    #+#             */
/*   Updated: 2016/09/01 15:55:58 by pgiorgio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (++a < 10)
	{
		b = a;
		while (++b < 10)
		{
			c = b;
			while (++c < 10)
			{
				ft_putchar('0' + a);
				ft_putchar('0' + b);
				ft_putchar('0' + c);
				if (a + b + c < 24)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
