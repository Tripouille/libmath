/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   next_prime.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 19:02:55 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/26 17:27:22 by tripouil    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

long	next_prime(long nb)
{
	if (nb < 2)
		return (2);
	while (!is_prime(nb))
		nb++;
	return (nb);
}
