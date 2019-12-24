/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fibonacci.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/24 15:12:59 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/24 15:21:26 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libmath.h"

int		fibonacci(int index)
{
	if (index < 2)
		return (index < 0 ? -1 : index);
	return (fibonacci(index - 1) + fibonacci(index - 2));
}
