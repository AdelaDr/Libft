*This project has been created as part of the 42 curriculum by adrahoto.*

[![C](https://img.shields.io/badge/language-C-555?style=flat&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![42 Project](https://img.shields.io/badge/42-Libft-blue)](https://www.42.fr)

# Table of Contents
- [Description](#description)
- [Instructions](#instructions)
- [Resources](#resources)
- [Library Details](#library-details)
- [Usage Example](#usage-example)
- [Technical Choices](#technical-choices)

# Description
`libft` is a custom C library that reimplements core standard library functions.  
Purpose: reinforce low-level programming skills, memory management, and string handling.  

Functions include:

- **Character checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

- **String manipulation**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

- **Memory management**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

- **Character conversion**: `ft_toupper`, `ft_tolower`

- **File descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

- **Linked list utilities**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

# Instructions
## Automatic Compilation
Clone and compile:
```bash
git clone https://github.com/AdelaDr/Libft.git
cd libft
make
```

Generates `libft.a` automatically.

## Usage in Projects

Include the header and link the library:

```bash
#include "libft.h"
```

```bash
gcc -Wall -Wextra -Werror main.c libft.a -o my_program
```

# Resources

- [C Standard Library Docs](https://man7.org/linux/man-pages/man3/)

- [TutorialsPoint](https://www.tutorialspoint.com)

- [W3Schools](https://www.w3schools.com)

- AI assistance: used for structuring code, logic explanation, and optimization suggestions, not direct function implementation.

# Library Details

- Norm-compliant and memory-safe

- Functions grouped: string, memory, character, list, and number utilities

- Modular design for easy reuse in C projects

# Usage Example

```bash
#include "libft.h"
#include <stdio.h>

int main(void) 
{
    char str[] = "Hello, 42!";
    printf("%zu\n", ft_strlen(str));
    return 0;
}
```

# Technical Choices

- Written entirely in standard C

- Consistent error handling

- Modular and maintainable design