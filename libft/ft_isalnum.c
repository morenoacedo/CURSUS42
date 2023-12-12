/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:18:34 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/12 11:34:32 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c<= 122) || (c >= 48 && c<= 57))
        return (1);
    else
        return (0);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
	int c = 'q';
	int b = '5';
    int g = '?';

	printf("ft_isalnum: %d\n", ft_isalnum(c));
	printf("isalnum: %d\n", isalnum(c));
	printf("ft_isalnum: %d\n", ft_isalnum(b));
	printf("isalnum: %d\n", isalnum(b));
    printf("ft_isalnum: %d\n", ft_isalnum(g));
    printf("isalnum: %d\n", isalnum(g));
    
    return (0);
}