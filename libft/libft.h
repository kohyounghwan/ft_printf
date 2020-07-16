/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:50:39 by ykoh              #+#    #+#             */
/*   Updated: 2020/07/16 15:09:42 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *restrict dst, const void *restrict src,
																	size_t n);
void				*ft_memccpy(void *restrict dst, const void *restrict src,
															int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *s);
size_t				ft_wcslen(const wchar_t *s);
size_t				ft_strnlen(const char *s, size_t maxlen);
size_t				ft_strlcpy(char *restrict dst, const char *restrict src,
															size_t dstsize);
size_t				ft_strlcat(char *restrict dst, const char *restrict src,
															size_t dstsize);
char				*ft_strrev(char *str);
void				ft_swap(char *a, char *b);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
																size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *str);
int					ft_abs(int i);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_islower(int c);

int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_free(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_lltoa(long long n);
char				*ft_hextoa(unsigned long long n, char specifier);
char				*ft_utoa(unsigned long long n);

char				*ft_dtoa(double n, int precision, char specifier);
char				*ft_dtoa_scientific(long double n, int precision,
																	char *ret);
char				*e_correction(char *ret, int precision, char specifier);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
ssize_t				ft_putwchar_fd(wchar_t c, int fd);
ssize_t				ft_putwstr_fd(wchar_t *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

int					ft_isneg_dbl(double x);
int					ft_isinf(double x);
int					ft_isnan(double x);
long double			ft_pow(long double x, long double y);
long double			ft_log10(long double x);
char				*ft_round(char *n, int precision);
char				*ft_floor(char *n, int precision);
char				*ft_ceil(char *n, int precision);

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst,
									void *(*f)(void *), void (*del)(void *));
#endif
