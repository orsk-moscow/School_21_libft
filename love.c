/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   love.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 12:55:13 by u18188899         #+#    #+#             */
/*   Updated: 2020/05/31 12:58:19 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int ac, char** av)
{
	char	*word;
	int		letter;
	char	*letter_binary;

	if (ac==1)
		return 0;
	word=av[1];
	printf("\n\n");
	while (*word)
	{
		letter = (int)*word;
		letter_binary = ft_itoa_base(letter,2);
		printf("%s",letter_binary);
		word++;
	}
	printf("\n\n");
	return(0);
}