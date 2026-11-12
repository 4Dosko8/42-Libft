*This project has been created as part of the 42 curriculum by ahassane*

# Libft

## Description
Libft is the first project of the 42 common core. The goal is to recode a set of functions from the C standard library, plus some additional utility functions, and gather them into a static library: `libft.a`.

This library will be reused in many later 42 projects, so it has to be reliable, norm-compliant (Norminette) and free of memory leaks.
The library is split into three parts: 'libc` re-implementations, additional string/memory/output helpers, and linked list manipulation.

## Library overview

All functions are declared in `libft.h`.

- **Part 1 – Libc functions** (prefixed with `ft_`, same behavior as the originals): character checks and conversions (`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`), string functions (`strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`), memory functions (`memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`) and `atoi`.
- **Part 2 – Additional functions**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, and file-descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
- **Part 3 – Linked lists**, built on the `t_list` structure (`void *content` and `struct s_list *next`): `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Instructions

### Compilation

The library is compiled with `cc -Wall -Wextra -Werror` and archived with `ar`.

```bash
make          # build libft.a
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # fclean + all
```

### Usage

Include the header in your code and link the library when compiling:

```c
#include "libft.h"  //Include the header in your source files
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program  #Then compile and link against the library
```

## Resources

- `man` pages of the original libc functions (`man 3 strlcpy`, `man 3 memmove`, etc.)
- [cppreference — C standard library](https://en.cppreference.com/w/c)
- [Cours langage C #12 - Liste chainee](https://youtu.be/27i0YbSdC88?is=EvKw5-rkhml1hWh8)
- [Python Tutor](https://pythontutor.com/c.html#) : Step-by-step C code visualizer (memory and pointers)

### Use of AI

**AI** (Claude) was used only for:

- **Writing this README** — structure and wording of the file.
- **Understanding subject and concepts** - Helping to understand the subject requirements. Explanations of pointers, memory and linked lists.

All the code in this project was written , tested and understood by me. **Claude is mentor and guide only**.
