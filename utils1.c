/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:40:37 by user              #+#    #+#             */
/*   Updated: 2023/07/07 14:45:26 by user             ###   ########.fr       */
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
		printf(MINISHELL);
		str = readline(0);
		if (*str)
		{
			add_history(str);
			printf("command not found: %s\n", str);
		}
	}
}