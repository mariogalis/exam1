/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:57:13 by magonzal          #+#    #+#             */
/*   Updated: 2023/02/01 20:07:23 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : fprime
// Expected files   : fprime.c
// Allowed functions: printf, atoi
// --------------------------------------------------------------------------------

// Write a program that takes a positive int and displays its prime factors on the
// standard output, followed by a newline.

// Factors must be displayed in ascending order and separated by '*', so that
// the expression in the output gives the right result.

// If the num of parameters is not 1, simply display a newline.

// The input, when there is one, will be valid.

// Examples:

// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("\n");
		return 0;
	}
	else
	{
		int i = 1;
		int num = atoi(argv[1]);
		if(num == 1)
			printf("1");
		while (num >= i)
		{
		if (num % i == 0)
			{
			printf("%d", i);
			if (num == i)
				break ;
			printf("*");
			num = num / i;
			i = 1;
			}
		i++;
		}
		
	}
}