/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   is_prime.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 18:31:40 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/24 15:40:00 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

int		is_prime(long nb)
{
	long		divisor;

	if (nb <= 1 || (!(nb % 2) && nb != 2))
		return (0);
	divisor = 3;
	while ((nb % divisor) && divisor * divisor > 0 && divisor * divisor <= nb)
		divisor += 2;
	return ((nb % divisor || nb == 3) ? 1 : 0);
}
