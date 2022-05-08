/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:24:14 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/07 13:24:14 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//calculate the length of a string.
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)c == s[i])
		return ((char *)s + i);
	return (0);
}

/*appends string src to the end of dst.  
It will append at most dstsize - strlen(dst) - 1 characters
Return the total length of the string they tried to create*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;
	size_t	size_src;

	j = 0;
	i = ft_strlen(dst);
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize == 0 || dstsize <= size_dst)
		return (size_src + dstsize);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dst + size_src);
}

/*copies up to dstsize - 1 characters from the string src to dst.
return the total length of the string they tried to create, 
for	strlcpy(void) that means the length of src*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}


/* Returns a new string, formed by the concatenation of 's1' and 's2'.
Returns NULL if memory allocation fails.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length_s1;
	int		length_s2;

	if (!s1 || !s2)
		return (0);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	str = (char *)malloc(((length_s1 + length_s2) + 1) * (sizeof(char)));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, length_s1 + 1);
	ft_strlcat(str, s2, (length_s1 + length_s2) + 1);
	return (str);
}

static size_t	ft_minlen(size_t a, size_t b)
{
	if (a > b)
	{
		return (b);
	}
	return (a);
}

/*function allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it*/
char	*ft_strdup(const char *s1)
{
	void	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

/* Returns a substring of the string 's'.
It starts from the 'start' index and has a maximum length of 'len'.
Returns NULL if memory allocation fails.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_tmp;
	size_t	i;
	size_t	len_str;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len_str = ft_minlen(ft_strlen(s), len);
	str_tmp = (char *)malloc((len_str + 1) * sizeof(char));
	if (!str_tmp)
		return (0);
	while (i < len_str)
	{
		str_tmp[i] = s[start];
		i++;
		start++;
	}
	str_tmp[i] = '\0';
	return (str_tmp);
}
