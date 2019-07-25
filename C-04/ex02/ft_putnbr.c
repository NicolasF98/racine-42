/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/09 17:25:40 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:19:09 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long c;

	c = nb;
	if (c < 0)
	{
		c = -c;
		write(1, "-", 1);
	}
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
	{
		c = c + '0';
		write(1, &c, 1);
	}
}