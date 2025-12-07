/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:28:27 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 21:16:15 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>		//printf() for debugging purposes
# include <stdlib.h>	//malloc(), size_t()
# include <unistd.h>	//write()

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t elsize);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, unsigned int len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(const char *s, int fd);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s, const char *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
/*

//------------------------------------------------------------
//------- BRIEF DESCRIPTION OF FUNCTIONS IN LIBFT.H ----------
//------------------------------------------------------------

isalpha		checks if character is alphabetic
isdigit		checks if character is a digit
isalnum		checks if character is alphanumeric
isascii		checks if character is a valid ASCII char
isprint		checks if character is printable
strlen		returns the length of a string
memset		fills memory with a constant byte
bzero		zeros out a block of memory
memcpy		copies memory from src to dst (no overlap)
memmove		copies memory allowing overlap
strlcpy		copies string with size limit
strlcat		appends string with size limit
toupper		converts char to uppercase
tolower		converts char to lowercase
strchr		locates first occurrence of a char in string
strrchr		locates last occurrence of a char in string
strncmp		compares strings up to n characters
memchr		locates byte in memory area
memcmp		compares two memory blocks
strnstr		locates substring within size limit
atoi		converts string to integer
calloc		allocates zero-initialized memory
strdup		duplicates a string
putchar_fd	writes a character to a file descriptor
putstr_fd	writes a string to a file descriptor
putendl_fd	writes string + newline to file descriptor
putnbr_fd	writes an integer to a file descriptor
itoa		integer to string conversion
substr		returns a substring from a string
striteri	applies function to each char in string (in place)
strmapi		creates new string by applying function to chars
strtrim		trims characters from start and end of string
strjoin		joins two strings into a new one
split		splits string into array by delimiter
*/