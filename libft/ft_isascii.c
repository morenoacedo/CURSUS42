/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:40:16 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/12 12:07:15 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int main()

{
int c = 109;
int b = 252;

printf("ft_isascii: %d\n", ft_isascii(c));
printf("isascii: %d\n", isascii(c));
printf("ft_isascii: %d\n", ft_isascii(b));
printf("isalnum: %d\n", isascii(b));

return (0);
}