/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 11:33:15 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/05 14:38:37 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i != 10)
	{
		c = ('0' + i);
		write(1, &c, 1);
		i++;
	}
}