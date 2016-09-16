/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 14:22:31 by amarzial          #+#    #+#             */
/*   Updated: 2016/09/03 02:48:33 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (index > 7)
	{
		*combs += 1;
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

int		ft_eight_queens_puzzle(void)
{
	int queens[8];
	int	combs;

	queens[1] = 3;
	queens[4] = 0;
	combs = 0;
	while (combs < 8)
		queens[combs++] = 0;
	combs = 0;
	queens[0] = 0;
	bitches_positions(queens, 0, &combs);
	return (combs);
}
