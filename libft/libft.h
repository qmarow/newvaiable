#ifndef HEADER_H
#define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>

int     ft_atoi(char *str);
int     ft_isalnum(int ch);
int     ft_isalpha(int ch);
int     ft_isascii(int c);
int     ft_isdigit(int ch);
int     ft_isprint(int ch);
int     ft_tolower (int c);
int     ft_toupper(int ch);
int     ft_memcmp(const void *arr1, const void *arr2, size_t n);
int     ft_strlen(char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memset(void *destimation, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int val, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, int n);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strdup(const char *src);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t		ft_strlcat(char *dsr, const char *src, size_t size);
size_t		ft_strlcpy(char *dsr, const char *str, size_t size);

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1,const char *set);
char	*ft_substr(char const * s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif