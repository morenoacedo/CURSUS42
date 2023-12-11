/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:28:09 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/11 14:39:21 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/* #include <ctype.h>
#include <stdio.h>

int main()
{
	int c = 'q';
	int b = '5';

	printf("ft_isdigit: %d\n", ft_isdigit(c));
	printf("isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(b));
	printf("isdigit: %d\n", isdigit(b));
} */
