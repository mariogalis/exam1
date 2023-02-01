/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:09:17 by magonzal          #+#    #+#             */
/*   Updated: 2023/02/01 20:23:37 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdio.h>

int ft_countdigits(int n) // 675234 = 6;
{
	int	res = 0;
	while(n)
	{
			res++;
			n = n/10;
	}
	return res;
}


char	*ft_itoa(int nbr)
{
	int		digits = ft_countdigits(nbr);
	char	*str = malloc(sizeof(char) * (digits +1));
	int		aux;
	if(!str)
		return NULL;
	str[digits] = '\0';
	if (nbr < 0) 
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr) 
	{
		str[--digits] = nbr % 10 + '0';
		nbr /= 10;
	}
	return str;
}

int main()
{
	ft_itoa(675234);
	return 0;
}