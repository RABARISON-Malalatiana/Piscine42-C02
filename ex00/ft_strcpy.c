/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:25:24 by marabari          #+#    #+#             */
/*   Updated: 2023/09/13 17:52:02 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	test[26];
	char	dest1[15];

	char src[] = "anticonstitutionnellement";
	char src1[] = "mercicordialement";
	__builtin_printf("%s\n", ft_strcpy(test, src));
	__builtin_printf("%s\n", ft_strcpy(dest1, src1));
	return (0);
}*/
