# 42SP_libft

O objetivo deste primeiro projeto é criar uma biblioteca totalmente desenvolvida em C e aprender como funcionam as funções mais comuns na programação, envolvendo manipulação de strings, conversões de tipos, listas encadeadas, dentre outras.

As funções são implementadas totalmente do zero, sem o auxílio de bibliotecas externas, sendo exceções apenas o uso do `write` (para saída de dados) e o `malloc` (para alocamento de memória).

Uma vez criada, esta biblioteca será usada nos projetos futuros, uma vez que o auxílio de bibliotecas externas segue como regra.

## Funções

### Manipulação e verificação de Chars:

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower
- ft_ispace

### Manipulação e verificação de strings:

- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

### Manipulação de memória:

- ft_calloc
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strdup

### Conversores:

- ft_atoi
- ft_itoa

### Saídas:

- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Bonus

### Listas encadeadas:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

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

## Testers Utilizados

- [Tripoulli](https://github.com/Tripouille/libftTester)
- [War Machine](https://github.com/0x050f/libft-war-machine)
