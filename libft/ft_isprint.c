/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:56:12 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/12 13:12:45 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
#include <ctype.h>

int	main()
{
int a = 56;
int b = 253;

printf("ft_isprint debe dar 1: %d\n", ft_isprint(a));
printf("isprint debe dar 1: %d\n", isprint(a));
printf("ft_isprint debe dar 0: %d\n", ft_isprint(b));
printf("ft_isprint debe dar 0: %d\n", ft_isprint(b));

return(0);
} */