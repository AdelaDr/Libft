*This project has been created as part of the 42 curriculum by <adrahoto>,*

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
- **String utilities**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_substr`, `ft_strjoin`
- **Memory handling**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- **Bonus**: Linked list functions (`ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, etc.)

# Instructions
## Automatic Compilation
Clone and compile:
```bash
git clone <repo_url>
cd libft
make
```

Generates libft.a automatically.
Usage in Projects

Include the header and link the library:

```bash
#include "libft.h"
```

```bash
gcc -Wall -Wextra -Werror main.c libft.a -o my_program
```

Resources

    42 Libft PDF

C Standard Library Docs

    Tutorials and articles on C fundamentals

    AI assistance: used for structuring code, logic explanation, and optimization suggestions, not direct function implementation.

Library Details

    Norm-compliant and memory-safe

    Functions grouped: string, memory, character, list, and number utilities

    Modular design for easy reuse in C projects

Usage Example

```bash
#include "libft.h"
#include <stdio.h>

int main(void) {
    char str[] = "Hello, 42!";
    printf("%zu\n", ft_strlen(str));
    return 0;
}
```

Technical Choices

    Written entirely in standard C

    Consistent error handling

    Modular and maintainable design