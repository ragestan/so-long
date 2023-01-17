/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:32:13 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:34:19 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
# include "mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_enm
{
	int				i;
	int				j;
	int				r;
	struct s_enm	*next;
}					t_enm;

typedef struct s_position
{
	int				x;
	int				y;
}					t_position;

typedef struct s_data
{
	void			*mlx;
	void			*win;
	char			**map;
	int				w;
	int				h;
	void			*img_ptr;
	int				h_img;
	int				w_img;

}					t_data;

char				**ft_split_bonus(char const *s, char c);
int					move_bonus(int keycode, t_data *data);
char				**maps_bonus(char *file, int x);
void				cheker_wall_bonus(t_data *data, int i, int j);
void				err_wall_bonus(void);
void				err_collec_bonus(void);
void				err_exit_bonus(void);
void				err_player_bonus(void);
void				err_map_bonus(void);
void				err_map2_bonus(void);
void				err_path_bonus(void);
void				check_all_bonus(t_data *data, t_position g);
void				check_map2_bonus(t_data *data);
void				cheker_map_bonus(t_data *data);
void				cheker_player_bonus(t_data *data);
void				cheker_exit_bonus(t_data *data);
void				cheker_collec_bonus(t_data *data);
void				ft_exit_check_bonus(t_data *data);
void				ft_exit_check_bonus(t_data *data);
char				*ft_strdup_bonus(char *src);
char				**double_map_bonus(t_data *data);
void				flood_bonus(int x, int y, char **data, char f);
int					move_bonus(int keycode, t_data *data);
t_position			hero_position_bonus(t_data *data, t_position g);
void				checke_valide_path_bonus(char **data, int i, int j,
						t_position g);
int					draw_bonus(t_data *data, t_position g);
void				show_bonus(t_data *data, int x, int y);
t_position			ft_w_and_h_bonus(t_data *data);
void				err_first_bonus(char *line, char *lines);
void				err_ll_bonus(char *lines);
void				help_bonus(char **data, int i, int j);
void				draw_help_bonus(t_data *data, int i, int j, t_position g);
void				draw_help2_bonus(t_data *data, int i, int j);
void				draw_help3_bonus(t_data *data, int i, int j);
void				draw_help4_bonus(t_data *data, int i, int j);
void				draw_help5_bonus(t_data *data, int i, int j);
void				move_help_bonus(t_data *data, t_position g);
void				move_help2_bonus(t_data *data, t_position g);
void				move_help3_bonus(t_data *data, t_position g);
void				move_help4_bonus(t_data *data, t_position g);
void				ft_free_bonus(char **str);
int					move_ayaya_bonus(t_data *data, t_position g, int i);
char				*ft_itoa_bonus(int n);
void				put_str_bonus(t_data *data);
void				draw_help6_bonus(t_data *data, int i, int j);
void				u_lose_bonus(void);
int					idk_bonus(t_data *data, t_enm **a);
int					collec_move(t_data *data);
void				idk_help(t_data *data, t_enm *a);
t_enm				*idk_help1(t_data *data, t_enm *a);
void				idk_help2(t_data *data, t_enm *a);
t_enm				*idk_help3(t_data *data, t_enm *a);
void				collec_yes(t_data *data, int i, int j, int k);
void				yes_help(t_data *data, int i, int j);
void				yes_help1(t_data *data, int i, int j);
void				yes_help2(t_data *data, int i, int j);
void				yes_help3(t_data *data, int i, int j);
void				yes_help4(t_data *data, int i, int j);
void				yes_help5(t_data *data, int i, int j);
void				yes_help6(t_data *data, int i, int j);
void				draw_idk(t_data *data, int i, int j, t_position g);
t_enm				*ft_lst(int i, int j, int r);
void				ft_lstadd_back(t_enm **lst, t_enm *new);
void				test(t_data *data, t_enm **a);
t_enm				*ft_lstlast(t_enm *lst);
void				put_er_img_bonus(t_data *data);
void				move_norm3(t_data *data, int x, int y);
void				move_norm2(t_data *data, int x, int y);
void				move_norm4(t_data *data, int x, int y);
void				move_norm(t_data *data, int x, int y);
void				more_check(t_data *data);
void				check_norm(t_data *data, int i, int j);
char				*get_next_line(int fd);
char				*line(char *str, int fd);
size_t				ft_strlen(char *a);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strchr(char *str, int c);
char				*ft_line(char *str);
char				*mzl(char *src);
#endif