/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiloian <apiloian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:30:17 by apiloian          #+#    #+#             */
/*   Updated: 2023/07/08 20:54:09 by apiloian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define MINISHELL  "\e[1;31mminishell\033[0m "
# define NO_CMD     "command not found: %s\n"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <sys/time.h>
# include <libft.h>

typedef struct s_data
{
	char	*path;
	char	*join_path;
	char	**cmd_path;
}	t_data;

void	init(char **envp, t_data *data);

char	*find_path(char **env);

char	*x_path(t_data *data, char *argv);

#endif