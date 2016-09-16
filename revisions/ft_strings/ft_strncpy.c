/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchalot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 22:25:12 by nchalot           #+#    #+#             */
/*   Updated: 2016/09/06 15:33:49 by nchalot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int src_len;
	unsigned int i;

	i = 0;
	src_len = ft_strlen(src);
	while (i < n)
	{
		dest[i] = src[i];
		if (i > src_len)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
