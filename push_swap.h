/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:41:38 by tnicoue           #+#    #+#             */
/*   Updated: 2022/02/01 11:56:24 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stock
{
	int				bigger;
	int				pos_bigger;
	int				shorter;
	int				shorter2;
	int				pos_shorter;
	int				pos_shorter2;
	int				size_a;
	int				size_b;
	int				size_all;
	int				lastb;
	int				var_tabcheck;
	int				done;
	int				size_before;
	int				checkaccepta;
	int				checklast;
	int				tab[1000];
	int				tab2[1000];
	int				tab3[1000];
	int				nchunk;
	int 			limit;
	int				max;
} t_stock;

t_stack	*ft_lstnew(int content);
t_stack	*lstlast(t_stack *lst);
long	ft_atoi(const char *str);
t_stack	*newlst(int value);
void	lstclear(t_stack **lst);
void	get_size_a(t_stack **stack_a, t_stock *stock);
int		max(t_stack *l);
int		ft_get_index(t_stack *l, int val);
void	lstadd_back(t_stack **alst, t_stack *new);
void	ft_lstadd_front(t_stack **alst, t_stack *new);
void	getbigger5(t_stack **stack_a, t_stock *stock);
void	ft_checkaccept(t_stack **stack_a, t_stock *stock);
void	*ft_calloc(size_t nmemb, size_t size);
void	nmkcoup(t_stock *stock);
int		ft_checktab(int valeur, int *tab);
void	ft_accept_a(t_stack **stack_a, t_stock *stock);
int		checklowercoup(t_stock *stock);
void	ft_last(t_stack **stack_b, t_stock *stock);
void	mvlowercoup(int indic, t_stock *stock, t_stack **stack_a);
void	ft_tri100(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	mvbigger5(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	ft_tri5(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	ft_pos_accept(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	mvlower4(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	ft_crea_tab_pos(t_stack **stack_a, t_stock *stock);
void 	direction(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	getlower4_5(t_stack **stack_a, t_stock *stock);
int		get_size(t_stack **stack, t_stock *stock);
void	ft_lstadd_back(t_stack **alst, t_stack *n);
void	ft_tri4(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	ft_init_struct(t_stock *stack);
void	*ft_memset(void *s, int c, size_t n);
int		ft_is_all_max(int *tab, int size, int max);
int		*ft_nb_in_tab(t_stack *p, t_stock *stock);
t_stack	*ft_replace_nb(t_stack **stack_a, t_stock *stock);
void	ft_print_lst(t_stack *stack);
int		ft_get_index_min(int *tab, int size);
void	free_split(char **cpy_argv);
void	ft_tri3(t_stack **stack_a);
void 	ft_tri2(t_stack **stack_a);
void 	choose_sort_short(t_stack **stack_a, t_stock *stack);
void	choose_sort_big(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		ft_indic100(t_stack **stack_a, t_stock *stock);
void	set_nb_chunk(t_stock *stock);
int		ft_pos(t_stack **stack_a, int val, t_stock *stock);
void	ft_remonte(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
int		ft_onsenfou(char *str);
int		ft_verifclean(t_stack *stack_a);
int		ft_verifint(t_stack *stack_a);
int		ft_verifnorecurse(t_stack *stack_a);
int		ft_strcmp(char *s1, char *s2);
int		ft_mklist(t_stack **stack_a, int argc, char **argv);
int		ft_chklist(int argc, char **argv);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		main(int argc, char **argv);
void	ft_lstclear(t_stack **lst);
void	ft_sa(t_stack **stack);
void	ft_sb(t_stack **stack);
void	ft_ra(t_stack **stack);
void	ft_rb(t_stack **stack);
void	ft_rra(t_stack **stack);
void	ft_rrb(t_stack **stack);
void	ft_pa(t_stack **stack_b, t_stack **stack_a, t_stock *stock);
void	ft_pb(t_stack **stack_a, t_stack **stack_b, t_stock *stock);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);

#endif
/*
SA / SB / SS

on save le premier element, on recupere la valeur 
du deuxieme element qu on affecte au premier lsta->content = lsta->next
lsta->next = save;

PA / PB 

on save les elements de a 1 par 1 en
 bouclant jusqu'a lsta->next == NULLlstb->content 
*/
