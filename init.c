/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiloian <apiloian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:40:37 by apiloian          #+#    #+#             */
/*   Updated: 2023/07/07 20:55:06 by apiloian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	init(int ac, char **av, char **envp)
{
	char	*str;

	if (ac || av || envp)
	{
	}
	while (1)
	{
		str = readline(MINISHELL);
		if (*str)
		{
			printf(NO_CMD, str);
			add_history(str);
		}
	}
}