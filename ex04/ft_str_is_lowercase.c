/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:24:36 by marabari          #+#    #+#             */
/*   Updated: 2023/09/13 16:46:17 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

//int main()
//{
	//__builtin_printf("%d", ft_str_is_lowercase("jfjfkgslklg"));
	//__builtin_printf("%d", ft_str_is_lowercase("14535"));
	//__builtin_printf("%d", ft_str_is_lowercase("_*/"));
	//__builtin_printf("%d", ft_str_is_lowercase("KLKJNGNK"));
	//__builtin_printf("%d", ft_str_is_lowercase("\0"));
	//return (0);
//}
