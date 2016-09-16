/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 03:30:03 by amarzial          #+#    #+#             */
/*   Updated: 2016/09/03 14:07:00 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		g_store[92][8];

void	ihavetowasteafunctiontoinvertrowsandcolumns(void)
{
	int	cnt;
	int	cnt2;
	int	tmp[8];

	cnt = -1;
	while (++cnt < 92)
	{
		cnt2 = -1;
		while (++cnt2 < 8)
		{
			tmp[g_store[cnt][cnt2] - 1] = cnt2 + 1;
		}
		cnt2 = -1;
		while (++cnt2 < 8)
		{
			g_store[cnt][cnt2] = tmp[cnt2];
		}
	}
}

int		imtootiredtonamethisthing(int *main_shit, int shit1, int shit2)
{
	if (main_shit[shit1] == main_shit[shit2] || shit1 == shit2)
	{
		return (0);
	}
	if (main_shit[shit1] - shit1 != main_shit[shit2] - shit2)
	{
		if ((main_shit[shit1] - 7 + shit1) != (main_shit[shit2] - 7 + shit2))
		{
			return (1);
		}
	}
	return (0);
}

int		placed(int *arr, int index)
{
	int cursor;

	cursor = 0;
	while (cursor < index)
	{
		if (!imtootiredtonamethisthing(arr, index, cursor))
			return (0);
		cursor += 1;
	}
	return (1);
}

void	bitches_positions(int *info, int index, int *combs)
{
	int cur;

	if (index > 7)
	{
		*combs += 1;
		cur = -1;
		while (++cur < 8)
			g_store[*combs - 1][info[cur]] = cur + 1;
		return ;
	}
	info[index] = 0;
	while (info[index] <= 7)
	{
		if (placed(info, index))
			bitches_positions(info, index + 1, combs);
		info[index] += 1;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens[8];
	int	combs;
	int	cursor;

	combs = 0;
	while (combs < 8)
		queens[combs++] = 0;
	combs = 0;
	queens[0] = 0;
	bitches_positions(queens, 0, &combs);
	combs = -1;
	ihavetowasteafunctiontoinvertrowsandcolumns();
	while (++combs < 92)
	{
		cursor = -1;
		while (++cursor < 8)
			ft_putchar(g_store[combs][cursor] + '0');
		ft_putchar('\n');
	}
}
