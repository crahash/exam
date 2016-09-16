/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 17:16:49 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 17:16:51 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_min(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '\0')
			return (1);
		if (is_min(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
