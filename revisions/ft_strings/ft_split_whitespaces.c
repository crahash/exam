/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 00:05:45 by dturki            #+#    #+#             */
/*   Updated: 2016/09/09 09:26:17 by dturki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
intis_whitespace(char c)
{
  if (c == ' ' || c == '\n' || c == '\t' || c == '\0')
    return (1);
  else
    return (0);
}

intcount_words(char *str, int n)
{
  int i;
  int word_count;

  word_count = 1 - (is_whitespace(str[0]));
  if (word_count == n && n == 1)
    return (0);
  i = 0;
  while (str[i] != '\0')
    {
      if (is_whitespace(str[i]) != is_whitespace(str[i + 1]))
	{
	  if (is_whitespace(str[i]) == 1)
	    word_count += 1;
	  if (word_count == n)
	    return (i + 1);
	}
      i++;
    }
  return (word_count);
}

intget_nth_word_length(char *src, int n, int *word_start)
{
  intlength;
  chara;

  length = 0;
  *word_start = count_words(src, n);
  a = '0';
  while (a != ' ' && a != '\t' && a != '\n' && a != '\0')
    {
      length++;
      a = src[*word_start + length];
    }
  return (length);
}

char*copy_string(char *source, int start, int length)
{
  inti;
  char*copy;

  i = 0;
  copy = (char *)malloc(sizeof(char) * (length + 1));
  while (i < length)
    {
      copy[i] = source[start + i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}

char**ft_split_whitespaces(char *str)
{
  intn;
  inti;
  intlength;
  intword_start;
  char**string_array;

  i = 0;
  n = count_words(str, 0);
  string_array = (char **)malloc(sizeof(char *) * (n + 1));
  while (i < n)
    {
      length = get_nth_word_length(str, i + 1, &word_start);
      string_array[i] = copy_string(str, word_start, length);
      i++;
    }
  string_array[n] = 0;
  return (string_array);
}

int main(void)
{
  char **tab;
  char *str = "Salut \t les copains";
  tab = ft_split_whitespaces(str);
  int i = 0;
  while (tab[i])
    {
      printf("%s", tab[i]);
      printf("\n");
      i++;
    }
  return 0;
}
