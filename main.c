/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 17:32:54 by abrault           #+#    #+#             */
/*   Updated: 2014/03/03 18:16:30 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	ft_putstr(ft_fustr("Bonjour", " comment ca va?"));
	return (0);
}
