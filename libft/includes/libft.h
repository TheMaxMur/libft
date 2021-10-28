#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	*ft_memset(void	*, int, size_t);
void	ft_bzero(void	*, size_t);
void	*ft_memcpy(void	*, const	void	*, size_t);
void	*ft_memccpy(void	*, const	void	*, int, size_t);
void	*ft_memmove(void	*, const	void	*, size_t);
void	*ft_memchr(const	void	*, int, size_t);
size_t	ft_strlen(const	char*);
int	ft_memcmp(const	void	*, const	void	*, size_t);
int	ft_isdigit(int);
int	ft_isalpha(int);
int	ft_isalnum(int);
int	ft_isascii(int);
int	ft_isprint(int);
int	ft_toupper(int);
int	ft_tolower(int);
char	*ft_strchr(const	char	*, int);
char	*ft_strrchr(const	char	*, int);
char	**ft_split(char	const	*, char);
int	ft_strncmp(const	char	*, const	char	*, size_t);
int	ft_strcmp(const	char	*, const	char	*);
void	*ft_calloc(size_t	, size_t);
size_t	ft_strlcpy(char	*, const	char	*, size_t	);
size_t	ft_strlcat(char	*, const	char	*, size_t	);
char	*ft_strdup(const	char	*);
char	*ft_strnstr(const	char	*, const	char	*, size_t);
int	ft_atoi(const	char	*);
void	ft_putchar_fd(char, int);
void	ft_putstr_fd(char	*, int);
void	ft_putendl_fd(char	*, int);
void	ft_putnbr_fd(int	, int);
t_list	*ft_lstnew(void	*context);
void	ft_lstadd_front(t_list	**, t_list	*);
void	ft_lstadd_back(t_list	**, t_list	*);
t_list	*ft_lstlast(t_list	*lst);
int	ft_lstsize(t_list	*lst);
void	ft_lstdelone(t_list	*, void(*del)(void	*));
void	ft_lstclear(t_list	**lst, void	(*del)(void	*));
void	ft_lstiter(t_list	*lst, void	(*f)(void	*));
t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void	*), void	(*del)(void	*));
char	*ft_strjoin(const	char*, const	char	*);
char	*ft_substr(const	char	*, unsigned	int, size_t);
char	*ft_strtrim(const	char*, const	char*);
char	*ft_itoa(int);
char	*ft_strmapi(const	char	*, char	(*f)(unsigned	int, char));

#endif
