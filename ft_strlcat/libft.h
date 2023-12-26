#include <stddef.h>
#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
void	ft_bzero(void *b, size_t len);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void	ft_memcpy(void *dst, void *src, size_t len);
void	ft_memset(void *b, int c, size_t len);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlen(const char *s);


#endif