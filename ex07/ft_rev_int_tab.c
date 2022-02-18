/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 05:04:00 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/15 16:47:33 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	start;

	start = 0;
	size--;
	while (start < size)
	{
		aux = tab[start];
		tab[start] = tab[size];
		tab[size] = aux;
		size--;
		start++;
	}
}
