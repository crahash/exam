/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiorgio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:40:06 by pgiorgio          #+#    #+#             */
/*   Updated: 2016/09/01 20:54:11 by pgiorgio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_arr(int *a, int l)
{
	int i;

	i = 0;
	a[l] = 0;
	while (l--)
	{
		a[l] = i++;
	}
}

void	pr(int *a, int p)
{
	ft_putchar('0' + a[p]);
	if (p)
	{
		pr(a, p - 1);
	}
}

void	cyc(int *a, int l, int p)
{
	if (++a[p] > 9)
	{
		cyc(a, l, p + 1);
		a[p] = a[p + 1];
		cyc(a, l, p);
	}
}

void	ft_print_combn(int n)
{
	int a[12];
	int f;

	f = 0;
	init_arr(a, n);
	while (!a[n] && !a[8])
	{
		if (f)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		pr(a, n - 1);
		cyc(a, n, 0);
		f = 1;
	}
}
