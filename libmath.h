/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libmath.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/24 15:13:35 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/24 17:34:28 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBMATH_H
# define LIBMATH_H
# include <stdarg.h>
# include <stdio.h>

int				fibonacci(int index);
int				is_prime(long nb);
long			next_prime(long nb);
long			factorial(long nb);
double			power(long nb, int power);
long			gcf(long n, ...);
long			gcm(long n, ...);

#endif
