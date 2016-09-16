/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 14:04:31 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 16:14:46 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_separator(char c)
{
	if (c == ' ' || c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int		is_min(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int		is_letter(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
			i++;
		if (i == 0 || is_separator(str[i - 1]))
		{
			if (is_min(str[i]))
				str[i] -= 32;
		}
		else if (!is_separator(str[i - 1])
				&& !is_min(str[i]) && is_letter(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
