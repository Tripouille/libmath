/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   gcf.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/24 15:48:08 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 14:17:22 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

static long		is_over(int n, long *numbers)
{
	int i;

	i = 0;
	while (i < n && numbers[i] == 1)
		i++;
	return (i == n ? 1 : 0);
}

static long		get_result(int n, long *numbers)
{
	long	result;
	long	prime;
	int		i;
	int		prime_factor;

	prime = 2;
	result = 1;
	while (!is_over(n, numbers))
	{
		prime_factor = 0;
		i = -1;
		while (++i < n)
			if (!(numbers[i] % prime) && ++prime_factor)
				numbers[i] /= prime;
		if (prime_factor == n)
			result *= prime;
		else if (!prime_factor)
			prime = next_prime(prime + 1);
	}
	return (result);
}

long			gcf(int n, ...)
{
	va_list		va;
	int			i;
	long		numbers[n];

	va_start(va, n);
	i = 0;
	while (i < n)
	{
		numbers[i] = va_arg(va, long);
		numbers[i] = numbers[i] < 0 ? -(numbers[i]) : numbers[i];
		if (numbers[i])
			i++;
		else
			n--;
	}
	va_end(va);
	return (get_result(n, numbers));
}
