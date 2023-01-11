/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:32:13 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/11 16:45:07 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_position
{
	int		x;
	int		y;
}			t_position;

typedef struct s_data
{
	void	*mlx;
	void	*win;
	char	**map;
	int		w;
	int		h;
	void	*img_ptr;
	int		h_img;
	int		w_img;

}			t_data;

char		**ft_split(char const *s, char c);
int			move(int keycode, t_data *data);
char		**maps(char *file, int x);
void		cheker_wall(t_data *data, int i, int j);
void		err_wall(void);
void		err_collec(void);
void		err_exit(void);
void		err_player(void);
void		err_map(void);
void		err_map2(void);
void		err_path(void);
void		check_all(t_data *data, t_position g);
void		check_map2(t_data *data);
void		cheker_map(t_data *data);
void		cheker_player(t_data *data);
void		cheker_exit(t_data *data);
void		cheker_collec(t_data *data);
void		ft_exit_check(t_data *data);
void		ft_exit_check(t_data *data);
char		*ft_strdup(char *src);
char		**double_map(t_data *data);
void		flood(int x, int y, char **data, char f);
int			move(int keycode, t_data *data);
t_position	hero_position(t_data *data, t_position g);
void		checke_valide_path(char **data, int i, int j, t_position g);
int			draw(t_data *data, t_position g);
void		show(t_data *data, int x, int y);
t_position	ft_w_and_h(t_data *data);
void		err_first(char *line, char *lines);
void		err_ll(char *lines);
void		help(char **data, int i, int j);
void		draw_help(t_data *data, int i, int j, t_position g);
void		draw_help2(t_data *data, int i, int j);
void		draw_help3(t_data *data, int i, int j);
void		draw_help4(t_data *data, int i, int j);
void		draw_help5(t_data *data, int i, int j);
void		move_help(t_data *data, t_position g);
void		move_help2(t_data *data, t_position g);
void		move_help3(t_data *data, t_position g);
void		move_help4(t_data *data, t_position g);
void		ft_free(char **str);
int			move_ayaya(t_data *data, t_position g, int i);
char		*ft_itoa(int n);
void		put_str(t_data *data);
void		draw_help6(t_data *data, int i, int j);
#endif