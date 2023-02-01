/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:34:22 by magonzal          #+#    #+#             */
/*   Updated: 2023/02/01 19:48:30 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FLOOD_FILL_H

# define FLOOD_FILL_H
# include <stdlib.h>
# include <stdio.h>




typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

char** make_area(char** zone, t_point size);
void	fill(char **tab, t_point size, t_point cur, char to_fill);
void	flood_fill(char **tab, t_point size, t_point begin);

#endif