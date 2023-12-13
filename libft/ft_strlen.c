/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:20:55 by danmoren          #+#    #+#             */
/*   Updated: 2023/12/13 10:14:28 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count ++;
		str ++;
	}
	return (count);
}
/* #include <string.h> //biblioteca para la función strlen
#include <stdio.h> 

int	main()
{
	const char	*str;

	str	= "Estoy en el Cursus";
	printf("El número de caracteres es %lu\n", ft_strlen(str));
	printf("El número de caracteres es %lu\n", strlen(str));
	return (0);
} */