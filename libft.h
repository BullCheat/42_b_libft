#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dst, const char *str);
char	*ft_strncpy(char *dst, const char *str, size_t len);
char	*ft_strchr(const char *str, int character);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_isdigit(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
