/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 17:22:36 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 17:23:25 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_maj(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '\0')
			return (1);
		if (is_maj(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
