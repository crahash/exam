/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:17:24 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 12:17:29 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_min(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_min(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
