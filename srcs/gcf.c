/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   gcf.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/24 15:48:08 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/24 17:27:37 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

static void		find_pfactor(long number, long *primes, int *ppower)
{
	while (number != 1)
	{
		if (!*primes)
			*primes = next_prime(primes[-1] + 1);
		while (!(number % *primes))
		{
			(*ppower)++;
			number /= *primes;
		}
		ppower++;
		primes++;
	}
}

static int		min_factor(int ppower[][1000], int n, int i)
{
	int		min;

	min = ppower[0][i];
	while (--n)
		if (ppower[n][i] < min)
			min = ppower[n][i];
	return (min);
}

static void		init(long primes[1000], int ppower[][1000], int n)
{
	int		i;

	i = -1;
	while (++i < 1000)
		primes[i] = 0;
	while (n--)
	{
		i = -1;
		while (++i < 1000)
			ppower[n][i] = 0;
	}
}

long			gcf(long n, ...)
{
	va_list		va;
	long		primes[1000];
	int			ppower[n][1000];
	int			i;
	long		result;

	if (n < 1)
		return (-1);
	init(primes, ppower, n);
	*primes = 2;
	va_start(va, n);
	i = -1;
	while (++i < n)
		find_pfactor(va_arg(va, long), primes, ppower[i]);
	result = 1;
	i = -1;
	while (primes[++i])
		result *= power(primes[i], min_factor(ppower, n, i));
	va_end(va);
	return (result);
}
