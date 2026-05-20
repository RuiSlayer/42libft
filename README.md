# libft

> A custom C library implementing standard utility functions from scratch — part of the 42 School curriculum.

## Overview

`libft` is a personal C library that re-implements a wide set of standard functions found in `<string.h>`, `<ctype.h>`, `<stdlib.h>`, and more. It serves as the foundation for all future 42 projects, providing reliable, well-tested utility functions.

***

## File Structure

```
libft/
├── Makefile
├── libft.h
├── ft_*.c    (source files)
```

***

## Functions

### Character Classification (`<ctype.h>`)

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit (0–9) |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table (0–127) |
| `ft_isprint` | Checks if a character is printable |
| `ft_isspace` | Checks if a character is a whitespace character |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

***

### String Manipulation (`<string.h>`)

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string |
| `ft_strchr` | Locates the first occurrence of a character in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string |
| `ft_strncmp` | Compares at most `n` characters of two strings |
| `ft_strcmp` | Compares two strings |
| `ft_strlcpy` | Copies a string into a buffer with size-bounded safety |
| `ft_strlcat` | Appends a string to a buffer with size-bounded safety |
| `ft_strnstr` | Finds the first occurrence of a substring within `n` characters |
| `ft_strdup` | Allocates and returns a duplicate of a string |
| `ft_substr` | Allocates and returns a substring from a string |
| `ft_strjoin` | Allocates and returns the concatenation of two strings |
| `ft_strtrim` | Trims characters from a set at the start and end of a string |
| `ft_split` | Splits a string by a delimiter and returns an array of substrings |
| `ft_strmapi` | Applies a function to each character of a string, returning a new string |
| `ft_striteri` | Applies a function in-place to each character of a string with its index |

***

### Memory Functions (`<string.h>`)

| Function | Description |
|---|---|
| `ft_memset` | Fills a block of memory with a constant byte |
| `ft_bzero` | Zeroes out a block of memory |
| `ft_memcpy` | Copies a block of memory to a non-overlapping destination |
| `ft_memmove` | Copies a block of memory, handling overlapping regions safely |
| `ft_memchr` | Scans memory for the first occurrence of a byte |
| `ft_memcmp` | Compares two blocks of memory byte by byte |
| `ft_calloc` | Allocates zero-initialised memory for an array of elements |

***

### Conversion Functions

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer |
| `ft_atol` | Converts a string to a long integer |
| `ft_itoa` | Converts an integer to a newly allocated string |

***

### File Descriptor Output

| Function | Description |
|---|---|
| `ft_putchar_fd` | Outputs a character to a given file descriptor |
| `ft_putstr_fd` | Outputs a string to a given file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a given file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a given file descriptor |

***

## Compilation

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild from scratch
```

***

## Usage

Include the header and link the library when compiling your project:

```c
#include "libft.h"
```

```bash
gcc main.c -L. -lft -o my_program
```

***

## Notes

- All memory-allocating functions return `NULL` on allocation failure.
- Functions that take a size parameter (`ft_strlcpy`, `ft_strlcat`, etc.) follow the BSD-style size-bounded API.
- `ft_split` allocates a `NULL`-terminated array of strings; the caller is responsible for freeing it.

***

*Made with ❤️ at 42 School.*
