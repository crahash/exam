/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:30:01 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 12:30:04 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_maj(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_maj(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
