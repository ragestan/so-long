/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:32:13 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:31:51 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "mlx.h"
# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_position
{
	int			x;
	int			y;
}				t_position;

typedef struct s_data
{
	void		*mlx;
	void		*win;
	char		**map;
	int			w;
	int			h;
	void		*img_ptr;
	int			h_img;
	int			w_img;

}				t_data;

char			**ft_split(char const *s, char c);
int				move(int keycode, t_data *data);
char			**maps(char *file, int x);
void			cheker_wall(t_data *data, int i, int j);
void			err_wall(void);
void			err_collec(void);
void			err_exit(void);
void			err_player(void);
void			err_map(void);
void			err_map2(void);
void			err_path(void);
void			check_all(t_data *data, t_position g);
void			check_map2(t_data *data);
void			cheker_map(t_data *data);
void			cheker_player(t_data *data);
void			cheker_exit(t_data *data);
void			cheker_collec(t_data *data);
void			ft_exit_check(t_data *data);
void			ft_exit_check(t_data *data);
char			*ft_strdup(char *src);
char			**double_map(t_data *data);
void			flood(int x, int y, char **data, char f);
int				move(int keycode, t_data *data);
t_position		hero_position(t_data *data, t_position g);
void			checke_valide_path(char **data, int i, int j, t_position g);
int				draw(t_data *data, t_position g);
void			show(t_data *data, int x, int y);
t_position		ft_w_and_h(t_data *data);
void			err_first(char *line, char *lines);
void			err_ll(char *lines);
void			help(char **data, int i, int j);
void			draw_help(t_data *data, int i, int j, t_position g);
void			draw_help2(t_data *data, int i, int j);
void			draw_help3(t_data *data, int i, int j);
void			draw_help4(t_data *data, int i, int j);
void			draw_help5(t_data *data, int i, int j);
void			move_help(t_data *data, t_position g);
void			move_help2(t_data *data, t_position g);
void			move_help3(t_data *data, t_position g);
void			move_help4(t_data *data, t_position g);
void			ft_free(char **str);
int				move_ayaya(t_data *data, t_position g, int i);
char			*ft_itoa(int n);
void			put_str(void);
void			put_er_img(t_data *data);
void			name_map(char *name);
void			name_map_bonus(char *name);
char			*get_next_line(int fd);
char			*line(char *str, int fd);
size_t			ft_strlen(char *a);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strchr(char *str, int c);
char			*ft_line(char *str);
char			*mzl(char *src);
int				ft_printf(const char *s, ...);
int				ft_putnbr(int i);
int				ft_putchar(char c);
unsigned int	ft_putnbr_x(unsigned int n);
unsigned int	ft_putnbr_xx(unsigned int n);
unsigned int	ft_putnbr_u(unsigned int n);
unsigned int	ft_putnbr_a(size_t n);
int				ft_putstr(char *str);
#endif