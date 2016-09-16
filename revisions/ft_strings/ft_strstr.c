/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 01:26:07 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 01:28:40 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int	k;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	else
	{
		while (str[i])
		{
			k = i;
			while (str[k] && str[k] == to_find[j])
			{
				k++;
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
			j = 0;
			i++;
		}
	}
	return (0);
}
