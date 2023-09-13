/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:16:19 by marabari          #+#    #+#             */
/*   Updated: 2023/09/13 18:01:58 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	__builtin_printf("%d", ft_str_is_numeric("554455"));
//	__builtin_printf("%d", ft_str_is_numeric("testjkdf"));
//	__builtin_printf("%d", ft_str_is_numeric("\0"));
//	__builtin_printf("%d", ft_str_is_numeric("*_/"));
//	return (0);
//}
