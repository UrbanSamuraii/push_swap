/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankhabar <ankhabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:27:54 by ankhabar          #+#    #+#             */
/*   Updated: 2023/01/30 14:15:54 by ankhabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_data
{
	int	*stack;
	int	stack_size;
	int	index_a;
}		t_data;

/* main */
int		is_sorted(t_data *data);

/* utils */
int		ft_strcmp(char *s1, char *s2);

/* parsing */
int		parsing_error(char *argv[]);
int		has_doubles(int *stack, int stack_len);

/* sorting1 */
void	sorting_3(t_data *data);
void	sorting_izi(t_data *data);
void	sorting_4(t_data *data);
void	sorting_5(t_data *data);

/* sorting2 */
void	sorting_everything(t_data *data);

/* stack_utils */
int		ft_max(t_data *data);
int		max_index(t_data *data);
int		min_index(t_data *data);
int		max_index_in_a(t_data *data);
int		min_index_in_a(t_data *data);

/* rotation type */
int		rotations_a(t_data *data, int i_needle);
int		rotations_b(t_data *data, int i_needle);

/* ops */
void	ft_pa(t_data *data);
void	ft_pb(t_data *data);
void	ft_sa(t_data *data);
void	ft_sb(t_data *data);
void	ft_ss(t_data *data);

/* ops_rr */
void	ft_ra(t_data *data);
void	ft_rb(t_data *data);
void	ft_rr(t_data *data);

/* ops_rrr */
void	ft_rra(t_data *data);
void	ft_rrb(t_data *data);
void	ft_rrr(t_data *data);

/* free */
void	free_stack(t_data *data);

/* error */
void	error(void);

#endif
