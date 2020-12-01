#ifndef	LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

void *ft_memset (void *p, int value, size_t size);
void ft_bzero(void *str, size_t size);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t size);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c , size_t size);
void *ft_memmove(void *dest, const void *src, size_t size);
void *ft_memchr(const void *src, int c, size_t size);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len)
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t destsize);
size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t size);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s); // corriger 
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif

