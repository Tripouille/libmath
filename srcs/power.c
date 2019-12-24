/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   power.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 14:03:55 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/24 15:43:47 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

double		power(long nb, int power)
{
	double	result;

	result = 1.0;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	while (power < 0)
	{
		result /= nb;
		power++;
	}
	return (result);
}
