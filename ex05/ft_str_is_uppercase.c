/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:42:22 by marabari          #+#    #+#             */
/*   Updated: 2023/09/13 16:59:18 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
//{
//__builtin_printf("%d", ft_str_is_uppercase("DFKJDSJKFLDNGKL"));
//__builtin_printf("%d", ft_str_is_uppercase("jfjfkgslklg"));
//__builtin_printf("%d", ft_str_is_uppercase("535355"));
//__builtin_printf("%d", ft_str_is_uppercase("\0"));
//__builtin_printf("%d", ft_str_is_uppercase("*/"));
//}
