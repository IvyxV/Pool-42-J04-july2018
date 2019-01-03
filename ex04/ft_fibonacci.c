/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:54:42 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/15 20:11:47 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int tab[index];

	if (index < 0)
		return (-1);
	if (index >= 0)
		tab[index] = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	tab[0] = 0;
	tab[1] = 1;
	return (tab[index]);
}
