/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:25:39 by jledesma          #+#    #+#             */
/*   Updated: 2022/08/29 15:05:44 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# define COLOR_GREEN  "\033[0;32m"
# define COLOR_RED  "\033[0;31m"
# define COLOR_BLUE  "\033[0;34m"
# define COLOR_END  "\033[0m"

/* 
**	First 23 functions
*/

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nitems, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				*ft_memset(void *str, int c, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big, const char *light, size_t len);
char				*ft_strrchr(const char *str, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** Additionals funtions
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_itoa(int n);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
/*
** Bonus 
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
						void (*del)(void *));
/*
** get_next_line
*/

size_t				ft_strlen_get(char *str);
char				*ft_strjoin_get(char *s1, char *s2);
char				*ft_strchr_get(char *s, int c);
char				*ft_get_line(char *line);
char				*ft_new_line(char *nline);
char				*get_next_line(int fd);
char				*get_get_line(int fd);

/*
** ft_printf 
*/

int					ft_printf(const char *str, ...);
void				ft_printf_char(char c, int *i);
void				ft_printf_int(int nb, int *i);
void				ft_printf_str(char *str, int *i);
void				ft_printf_hex(unsigned long long nb, int *i);
void				ft_printf_nb(unsigned int nb, int *i);
void				ft_printf_base(unsigned int n, char *base, int *i);
void				print_error(char *msg);
int					ft_abs(int nb);

#endif