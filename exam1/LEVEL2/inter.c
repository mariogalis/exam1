/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:46:44 by magonzal          #+#    #+#             */
/*   Updated: 2023/02/01 17:56:52 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $
#include <unistd.h>

int		main(int argc, char *argv[])
{
	char	*str1 = argv[1];
	char	*str2 = argv[2];
	int		i = 0, j = 0;
	
	if(argc == 3)
	{
		while(str1[i]!= '\0')
		{
			j = 0;
			while (str2[j] != '\0')
			{
				if(str1[i] == str2[j])
				{
					write(1,&str1[j],1);
					j = 0;
					i++;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
}