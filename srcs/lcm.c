/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lcm.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/24 15:48:08 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/26 19:03:58 by tripouil    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

static long		get_result(long *numbers, int n)
{
	long	result;
	long	prime;
	int		i;
	int		done;

	prime = 2;
	result = 1;
	while (done != n)
	{
		i = -1;
		done = 0;
		while (++i < n)
			if (!(numbers[i] % prime) && ++done)
				numbers[i] /= prime;
		if (done)
			result *= prime;
		else
			prime = next_prime(prime + 1);
		done = 0;
		while (numbers[done] == 1 && ++done < n);
	}
	return (result);
}

long				lcm(long n, ...)
{
	va_list		va;
	int			i;
	long		numbers[n];

	va_start(va, n);
	i = -1;
	while (++i < n)
		numbers[i] = va_arg(va, long);
	va_end(va);
	return (get_result(numbers, n));
}
