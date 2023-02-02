/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankhabar <ankhabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:47:33 by ankhabar          #+#    #+#             */
/*   Updated: 2023/02/01 16:46:45 by ankhabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error(char *argv[], int ref)
{
	if (ref)
		free_argv(argv);
	write(2, "Error\n", 6);
	exit(0);
}
