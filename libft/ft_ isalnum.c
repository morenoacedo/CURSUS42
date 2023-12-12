/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ isalnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:54:30 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/12 11:11:00 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c<= 122) || (c >= 48 && c<= 57))
        return (1);
    else
        return (0);
}




#include <ctype.h> //archivo de encabezado donde se define isalnum