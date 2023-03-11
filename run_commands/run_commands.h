/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   run_commands.h                                           :+:    :+:      */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 14:36:43 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/26 14:36:43 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUN_COMMANDS_H
# define RUN_COMMANDS_H
# include "../headers/minishell.h"
# include "../headers/bool.h"
# include "run_program_internal.h"
# include "../functions/set_exit_status.h"
# include "run_program_utils.h"

void	run_commands(t_list **head, t_minishell *minishell);

#endif
