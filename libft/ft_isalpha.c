/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:26:55 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/11 13:01:23 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/* #include <ctype.h>
#include <stdio.h>
int main()
{
	int c = 'q';
	int b = 'a';

	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(b));
	printf("isalpha: %d\n", isalpha(b));
} */