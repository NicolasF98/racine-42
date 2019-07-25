/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_reverse_alphabet.c                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 11:44:41 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/05 11:44:48 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	while (i != 26)
	{
		c = ('z' - i);
		write(1, &c, 1);
		i++;
	}
}
