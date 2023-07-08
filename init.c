/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiloian <apiloian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:40:37 by apiloian          #+#    #+#             */
/*   Updated: 2023/07/08 20:38:30 by apiloian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	init(int ac, char **av, char **envp, t_data *data)
{
	char	**args;
	char	*str;

	if (ac || av)
	{
	}
	data->path = find_path(envp);
	while (1)
	{
		str = readline(MINISHELL);
		args = ft_split(str, ' ');
		if (*str)
		{
			puts(x_path(data, args[0]));
			add_history(str);
		}
	}
}
