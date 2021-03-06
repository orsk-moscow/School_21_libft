/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 10:39:50 by klekisha          #+#    #+#             */
/*   Updated: 2019/04/23 21:22:19 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	size_t	i1;
	size_t	i2;
	size_t	i3;
	char	*fresh;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i1] && i1 < (n - 1))
		i1++;
	while (s2[i2] && i2 < (n - 1 - i1))
		i2++;
	if (!(fresh = (char*)malloc(sizeof(char) * (i1 + i2 + 1))))
		return (NULL);
	while (i3 < i1)
		fresh[i3++] = *s1++;
	while (i3 < (i1 + i2))
		fresh[i3++] = *s2++;
	fresh[i3] = '\0';
	return (fresh);
}
