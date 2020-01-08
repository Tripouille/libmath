/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libmath.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/24 15:13:35 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 13:32:30 by jgambard    ###    #+. /#+    ###.fr     */
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
long			gcf(int n, ...);
long			lcm(int n, ...);

#endif
