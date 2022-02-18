/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 05:02:43 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/13 05:05:48 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	aux;

	index = 1;
	while (index < size)
	{
		if (tab[index] < tab[index -1])
		{
			aux = tab[index -1];
			tab[index -1] = tab[index];
			tab[index] = aux;
			index = 1;
		}
		else
		{
			index++;
		}
	}	
}
