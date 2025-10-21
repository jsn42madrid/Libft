/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:43:35 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:17:50 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}


/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
OJO COMPARAR CON LA SIGUIENTE IMPLEMENTACIÖN PROPUESTA POR LA IA EN EL MULTIFICHERO
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/* ---------- ft_strchr.c ---------- */
/* Returns pointer to first occurrence of character c in string s, or NULL if not found. */
char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return NULL;
}






#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}



/*
// strchr.c - Personal implementation of strchr
#include <stdio.h>

char *my_strchr(const char *str, int ch) {
    // Cast ch to char for comparison
    char target = (char)ch;

    // Traverse the string
    while (*str) {
        if (*str == target) {
            return (char *)str; // Return pointer to first occurrence
        }
        str++;
    }

    // Check for null terminator match
    if (target == '\0') {
        return (char *)str;
    }

    return NULL; // Character not found
}

// Example usage
int main() {
    const char *text = "Hello, world!";
    char *result = my_strchr(text, 'o');

    if (result) {
        printf("Found 'o' at position: %ld\n", result - text);
    } else {
        printf("'o' not found in the string.\n");
    }

    return 0;
}

*/





/*
TRCHR(3) (simplified)

NAME
    strchr -- locate character in string
SYNOPSIS
    char *strchr(const char *s, int c);
DESCRIPTION
    The strchr() function locates the first occurence of c (converted to a char)
	in the string pointed to by s. The terminating null character is considered 
	to be part of the string; therefor if c is '\0', the function locate 
	the terminating '\0'.
RETURN VALUES
    The function strchr() return a pointer to the located character, 
	or NULL if the character does not appear in the string.
*/
