# 42 Cursus - libft

<img src="https://game.42sp.org.br/static/assets/achievements/libftm.png" alt="completion-with-bonus-badge" align="left">


O objetivo deste primeiro projeto é criar uma biblioteca totalmente desenvolvida em **C** e aprender como funcionam as funções mais comuns na programação, envolvendo manipulação de strings, conversões de tipos, listas encadeadas, dentre outras. Essas funções são implementadas do zero, sem o auxílio de bibliotecas externas, sendo exceções apenas o uso do `write` (para saída de dados) e o `malloc` (para alocamento de memória). E uma vez criada, esta biblioteca será usada nos projetos futuros, uma vez que o auxílio de bibliotecas externas segue proibido como regra.


## Funções <img src="https://img.shields.io/badge/GRADE-125%2F100-green" align="right">

### Manipulação e verificação de Chars:

<div align="center">

| Implementação | Manual | Protótipo |
|:---|:---:|:---|
|———————|—————|——————————————————————————————————|
| [ft_isalpha](./srcs/ft_isalpha.c) | [isalpha](https://man7.org/linux/man-pages/man3/isalpha.3.html) | `int	ft_isalpha(int c);` |
| [ft_isdigit](./srcs/ft_isdigit.c) | [isdigit](https://man7.org/linux/man-pages/man3/isdigit.3.html) | `int	ft_isdigit(int c);` |
| [ft_isalnum](./srcs/ft_isalnum.c) | [isalnum](https://man7.org/linux/man-pages/man3/isalnum.3.html) | `int	ft_isalnum(int c);` |
| [ft_isascii](./srcs/ft_isascii.c) | [isascii](https://man7.org/linux/man-pages/man3/isascii.3.html) | `int	ft_isascii(int c);` |
| [ft_isprint](./srcs/ft_isprint.c) | [isprint](https://man7.org/linux/man-pages/man3/isprint.3.html) | `int	ft_isprint(int c);` |
| [ft_isspace](./srcs/ft_isspace.c) | [isspace](https://man7.org/linux/man-pages/man3/isspace.3.html) | `int	ft_isspace(int c);` |
| [ft_toupper](./srcs/ft_toupper.c) | [toupper](https://man7.org/linux/man-pages/man3/toupper.3.html) | `int	ft_toupper(int c);` |
| [ft_tolower](./srcs/ft_tolower.c) | [tolower](https://man7.org/linux/man-pages/man3/tolower.3.html) | `int	ft_tolower(int c);` |

</div>

### Manipulação e verificação de strings:

<div align="center">

| Implementação | Manual | Protótipo |
|:---|:---:|:---|
|———————|—————|——————————————————————————————————|
| [ft_strlen](./srcs/ft_strlen.c) | [strlen](https://man7.org/linux/man-pages/man3/strlen.3.html) | `size_t	ft_strlen(const char *src);` |
| [ft_strlcpy](./srcs/ft_strlcpy.c) | [strlcpy](https://man.openbsd.org/strlcpy.3) | `size_t	ft_strlcpy(char *dst, const char *src, size_t len);` |
| [ft_strlcat](./srcs/ft_strlcat.c) | [strlcat](https://man.openbsd.org/strlcat.3) | `size_t	ft_strlcat(char *dst, const char *src, size_t len);` |
| [ft_strchr](./srcs/ft_strchr.c) | [strchr](https://man7.org/linux/man-pages/man3/strchr.3.html) | `char	*ft_strchr(const char *src, int c);` |
| [ft_strrchr](./srcs/ft_strrchr.c) | [strrchr](https://man7.org/linux/man-pages/man3/strrchr.3.html) | `char	*ft_strrchr(const char *src, int c);` |
| [ft_strncmp](./srcs/ft_strncmp.c) | [strncmp](https://man7.org/linux/man-pages/man3/strncmp.3.html) | `int	ft_strncmp(const char *stra, const char *strb, size_t n);` |
| [ft_strnstr](./srcs/ft_strnstr.c) | - | `char	*ft_strnstr(const char *big, const char *little, size_t n);` |
| [ft_substr](./srcs/ft_substr.c) | - | `char	*ft_substr(char const *s, unsigned int start, size_t len);` |
| [ft_strjoin](./srcs/ft_strjoin.c) | - | `char	*ft_strjoin(char const *s1, char const *s2);` |
| [ft_strtrim](./srcs/ft_strtrim.c) | - | `char	*ft_strtrim(char const *s1, char const *set);` |
| [ft_split](./srcs/ft_split.c) | - | `char	**ft_split(char const *s, char c);` |
| [ft_strmapi](./srcs/ft_strmapi.c) | - | `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));` |
| [ft_striteri](./srcs/ft_striteri.c) | - | `void	ft_striteri(char *s, void (*f)(unsigned int, char*));` |

</div>

### Manipulação de memória:

<div align="center">

| Implementação | Manual | Protótipo |
|:---|:---:|:---|
|———————|—————|——————————————————————————————————|
| [ft_bzero](./srcs/ft_bzero.c) | [bzero](https://man7.org/linux/man-pages/man3/bzero.3.html) | `void	ft_bzero(void *s, size_t n);` |
| [ft_calloc](./srcs/ft_calloc.c) | [calloc](https://man7.org/linux/man-pages/man3/calloc.3.html) | `void	*ft_calloc(size_t nitems, size_t size);` |
| [ft_memset](./srcs/ft_memset.c) | [memset](https://man7.org/linux/man-pages/man3/memset.3.html) | `void	*ft_memset(void *src, int c, size_t n);` |
| [ft_memcpy](./srcs/ft_memcpy.c) | [memcpy](https://man7.org/linux/man-pages/man3/memcpy.3.html) | `void	*ft_memcpy(void *dst, const void *src, size_t n);` |
| [ft_memchr](./srcs/ft_memchr.c) | [memchr](https://man7.org/linux/man-pages/man3/memchr.3.html) | `void	*ft_memchr(const void *src, int c, size_t n);` |
| [ft_memcmp](./srcs/ft_memcmp.c) | [memcmp](https://man7.org/linux/man-pages/man3/memcmp.3.html) | `int	ft_memcmp(const void *stra, const void *strb, size_t n);` |
| [ft_memmove](./srcs/ft_memmove.c) | [memmove](https://man7.org/linux/man-pages/man3/memmove.3.html) | `void	*ft_memmove(void *dst, const void *src, size_t n);` |
| [ft_strdup](./srcs/ft_strdup.c) | [strdup](https://man7.org/linux/man-pages/man3/strdup.3.html) | `char	*ft_strdup(const char *s1);` |

</div>

### Conversores:

<div align="center">

| Implementação | Manual | Protótipo |
|:---|:---:|:---|
|———————|—————|——————————————————————————————————|
| [ft_atoi](./srcs/ft_atoi.c) | [atoi](https://man7.org/linux/man-pages/man3/atoi.3.html) | `int	ft_atoi(const char *strNum);` |
| [ft_itoa](./srcs/ft_itoa.c) | - | `char	*ft_itoa(int n);` |

</div>

### Saídas:

<div align="center">

| Implementação | Manual | Protótipo |
|:---|:---:|:---|
|———————|—————|——————————————————————————————————|
| [ft_putchar_fd](./srcs/ft_putchar_fd.c) | - | `void	ft_putchar_fd(char c, int fd);` |
| [ft_putstr_fd](./srcs/ft_putstr_fd.c) | - | `void	ft_putstr_fd(char *s, int fd);` |
| [ft_putendl_fd](./srcs/ft_putendl_fd.c) | - | `void	ft_putendl_fd(char *s, int fd);` |
| [ft_putnbr_fd](./srcs/ft_putnbr_fd.c) | - | `void	ft_putnbr_fd(int n, int fd);` |

</div>

## Funções Bônus

### Listas encadeadas:

<div align="center">

| Implementação | Manual | Protótipo |
|:---|:---:|:---|
|———————|—————|——————————————————————————————————|
| [ft_lstnew](./srcs/bonus/ft_lstnew.c) | - | `t_list	*ft_lstnew(void *content);` |
| [ft_lstadd_front](./srcs/bonus/ft_lstadd_front.c) | - | `void	ft_lstadd_front(t_list **lst, t_list *new);` |
| [ft_lstsize](./srcs/bonus/ft_lstsize.c) | - | `int	ft_lstsize(t_list *lst);` |
| [ft_lstlast](./srcs/bonus/ft_lstlast.c) | - | `t_list	*ft_lstlast(t_list *lst);` |
| [ft_lstadd_back](./srcs/bonus/ft_lstadd_back.c) | - | `void	ft_lstadd_back(t_list **lst, t_list *new);` |
| [ft_lstdelone](./srcs/bonus/ft_lstdelone.c) | - | `void	ft_lstdelone(t_list *lst, void (*del)(void *));` |
| [ft_lstclear](./srcs/bonus/ft_lstclear.c) | - | `void	ft_lstclear(t_list **lst, void (*del)(void *));` |
| [ft_lstiter](./srcs/bonus/ft_lstiter.c) | - | `void	ft_lstiter(t_list *lst, void (*f)(void *));` |
| [ft_lstmap](./srcs/bonus/ft_lstmap.c) | - | `t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` |

</div>

## Compilação e Execução

No terminal, digite:

```
make
```

Para testar a biblioteca, é necessário criar uma `main.c` com o cabeçalho `#include "libft.h"` e depois compilar com a `libft.a`:

```
cc -Wall -Werror -Wextra -I ./includes -c main.c -o ./objs/main.o
cc -Wall -Werror -Wextra ./objs/main.o libft.a
```

## Sobre os Manuais

O formato geral de nomenclatura das páginas de manual no Linux segue a convenção `nome(seção)`. A seção do manual indica a categoria à qual o tópico pertence. Seções:

- **Seção 1:** São os comandos executáveis do usuário (por exemplo, comandos de shell, utilitários do sistema).
- **Seção 2:** São as chamadas de sistema do kernel.
- **Seção 3:** São as bibliotecas de funções do C.
- **Seção 3p:** São as funções de bibliotecas POSIX (Portable Operating System Interface).
- **Seção 4:** São os arquivos especiais (por exemplo, arquivos de dispositivo).
- **Seção 5:** São os formatos de arquivo e convenções.
- **Seção 7:** São as convenções, protocolos e padrões de sistema.
- **Seção 8:** São os comandos e utilitários do sistema administrativo.

## Testers Utilizados

- [Tripoulli](https://github.com/Tripouille/libftTester)
- [War Machine](https://github.com/0x050f/libft-war-machine)
