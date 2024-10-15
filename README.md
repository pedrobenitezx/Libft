# LIBFT | 42 School

## C Function Library Project

This is the first project in a series where we implement and explore various functions from the C standard library. In this phase, we've recreated a set of essential functions often used in string and memory management in C. Below you'll find detailed explanations of each function, including their purpose, associated library, any error handling details, potential use cases, and their return values.

| Function        | Library    | Function        | Library    | Function        | Library    |
| --------------- | ---------- | --------------- | ---------- | --------------- | ---------- |
| [isalpha](ft_isalpha.c)   | <ctype.h>  | [tolower](ft_tolower.c) | <ctype.h>  | [memmove](ft_memmove.c) | <string.h>  |
| [isdigit](ft_isdigit.c)   | <ctype.h>  | [strchr](ft_strchr.c)  | <string.h>  | [strlcpy](ft_strlcpy.c) | <string.h>  |
| [isalnum](ft_isalnum.c)   | <ctype.h>  | [strrchr](ft_strrchr.c) | <string.h>  | [strlcat](ft_strlcat.c) | <string.h>  |
| [isascii](ft_isascii.c)   | <ctype.h>  | [strncmp](ft_strncmp.c) | <string.h>  | [atoi](ft_atoi.c)       | <stdlib.h>  |
| [isprint](ft_isprint.c)   | <ctype.h>  | [memchr](ft_memchr.c)  | <string.h>  | [calloc](ft_calloc.c)   | <stdlib.h>  |
| [strlen](ft_strlen.c)    | <string.h> | [memcmp](ft_memcmp.c)  | <string.h>  | [strdup](ft_strdup.c)   | <string.h>  |
| [memset](ft_memset.c)    | <string.h> | [strnstr](ft_strnstr.c)| <string.h>  |                  |              |
| [bzero](ft_bzero.c)      | <strings.h>| [toupper](ft_toupper.c) | <ctype.h>  |                  |              |
| [memcpy](ft_memcpy.c)    | <string.h> | [tolower](ft_tolower.c) | <ctype.h>  |                  |              |

## Additional Functions Implemented

| Function Name          | Description                                                                                           | Return Value                                              |
| ---------------------- | ----------------------------------------------------------------------------------------------------- | --------------------------------------------------------- |
| [ft_substr](ft_substr.c)   | Allocates (using malloc) and returns a substring from the string `s`, starting at index `start` and having a maximum length of `len`. | The resulting substring or NULL if memory allocation fails. |
| [ft_strjoin](ft_strjoin.c) | Allocates (using malloc) and returns a new string, which is the result of concatenating `s1` and `s2`.  | The resulting new string or NULL if memory allocation fails. |
| [ft_strtrim](ft_strtrim.c) | Allocates (using malloc) and returns a copy of `s1` with the characters specified in `set` removed from the start and end. | The trimmed string or NULL if memory allocation fails.     |
| [ft_split](ft_split.c)     | Splits the string `s` into an array of strings using the character `c` as a delimiter.               | An array of resulting strings or NULL if memory allocation fails. |
| [ft_itoa](ft_itoa.c)       | Converts the integer `n` to an ASCII string.                                                       | The resulting string or NULL if memory allocation fails.   |
| [ft_strmapi](ft_strmapi.c) | Applies the function `f` to each character of the string `s` to create a new string resulting from successive applications of `f`. | The resulting string created by successive applications of `f`. |
| [ft_striteri](ft_striteri.c)| Applies the function `f` to each character of the string `s`, passing its index as the first argument. Each character is passed by value to `f` for modification if needed. | No return value.                                          |
| [ft_putchar_fd](ft_putchar_fd.c)| Outputs the character `c` to the specified file descriptor.                                     | No return value.                                          |
| [ft_putstr_fd](ft_putstr_fd.c)| Outputs the string `s` to the specified file descriptor.                                        | No return value.                                          |
| [ft_putendl_fd](ft_putendl_fd.c)| Outputs the string `s` to the specified file descriptor, followed by a newline.                | No return value.                                          |
| [ft_putnbr_fd](ft_putnbr_fd.c)  | Outputs the number `n` to the specified file descriptor.                                       | No return value.                                          |

## Detailed Function Descriptions

### [isalpha](isalpha.c)

- **Description**: Checks if the given character is alphabetic (a-z, A-Z).
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Input validation to ensure characters are letters.
- **Return Value**: Returns 1 if the character is alphabetic, otherwise returns 0.

### [isdigit](isdigit.c)

- **Description**: Checks if the given character is a digit (0-9).
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Input validation to ensure characters are digits.
- **Return Value**: Returns 1 if the character is a digit, otherwise returns 0.

### [isalnum](isalnum.c)

- **Description**: Checks if the given character is alphanumeric (letter or digit).
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Input validation to ensure characters are letters or digits.
- **Return Value**: Returns 1 if the character is alphanumeric, otherwise returns 0.

### [isascii](isascii.c)

- **Description**: Checks if the given character is an ASCII character.
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Input validation to ensure characters are ASCII.
- **Return Value**: Returns 1 if the character is ASCII, otherwise returns 0.

### [isprint](isprint.c)

- **Description**: Checks if the given character is printable.
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Input validation to ensure characters are printable.
- **Return Value**: Returns 1 if the character is printable, otherwise returns 0.

### [strlen](strlen.c)

- **Description**: Calculates the length of a string.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: String manipulation to determine its length.
- **Return Value**: Returns the number of characters in the string, excluding the null character.

### [memset](memset.c)

- **Description**: Fills a block of memory with a specified value.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Initialize memory to a specific value.
- **Return Value**: Returns a pointer to the memory area `s`.

### [bzero](bzero.c)

- **Description**: Sets all bytes in a block of memory to zero.
- **Library**: <strings.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Clear memory to zero.
- **Return Value**: None.

### [memcpy](memcpy.c)

- **Description**: Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas must not overlap.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Copy memory content from one area to another without overlap.
- **Return Value**: Returns a pointer to `dest`.

### [memmove](memmove.c)

- **Description**: Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas may overlap.
- **Library**: <string.h>
- **Error Handling**: Handles overlapping memory areas.
- **Recommended Use**: Copy memory content from one area to another with possible overlap.
- **Return Value**: Returns a pointer to `dest`.

### [strlcpy](strlcpy.c)

- **Description**: Copies up to `size - 1` characters from the NULL-terminated string `src` to `dest`, NULL-terminating the result.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Safe copying of strings to ensure NULL-termination.
- **Return Value**: Returns the total length of the string it tried to create.

### [strlcat](strlcat.c)

- **Description**: Appends the NULL-terminated string `src` to the end of `dest`. It will append at most `size - strlen(dest) - 1` bytes, NULL-terminating the result.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Safe concatenation of strings to ensure NULL-termination.
- **Return Value**: Returns the total length of the string it tried to create.

### [atoi](atoi.c)

- **Description**: Converts the initial portion of the string `str` to an integer.
- **Library**: <stdlib.h>
- **Error Handling**: Does not handle invalid input explicitly.
- **Recommended Use**: Convert numeric strings to integers for arithmetic operations.
- **Return Value**: Returns the converted value as an `int`.

### [calloc](calloc.c)

- **Description**: Allocates memory for an array of `nmemb` elements of `size` bytes each and initializes all bytes to zero.
- **Library**: <stdlib.h>
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Safe memory allocation for arrays.
- **Return Value**: Returns a pointer to the allocated memory.

### [strdup](strdup.c)

- **Description**: Returns a pointer to a new string which is a duplicate of the string `s`.
- **Library**: <string.h>
- **Error Handling**: Returns NULL if insufficient memory is available.
- **Recommended Use**: Create a copy of a string for safe manipulation.
- **Return Value**: Returns a pointer to the duplicated string.

### [strncmp](strncmp.c)

- **Description**: Compares at most the first `n` bytes of `s1` and `s2`.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Compare strings up to a specified length.
- **Return Value**: Returns an integer less than, equal to, or greater than zero if `s1` is found to be less than, to match, or be greater than `s2`.

### [memchr](memchr.c)

- **Description**: Scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Locate a character in a block of memory.
- **Return Value**: Returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.

### [strchr](strchr.c)

- **Description**: Returns a pointer to the first occurrence of the character `c` in the string `s`.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Locate a character in a string.
- **Return Value**: Returns a pointer to the matched character or NULL if the character is not found.

### [strrchr](strrchr.c)

- **Description**: Returns a pointer to the last occurrence of the character `c` in the string `s`.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Locate the last occurrence of a character in a string.
- **Return Value**: Returns a pointer to the matched character or NULL if the character is not found.

### [strnstr](strnstr.c)

- **Description**: Locates the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched.
- **Library**: <string.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Search for a substring within a limited length.
- **Return Value**: Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

### [toupper](toupper.c)

- **Description**: Converts a lowercase letter to uppercase.
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Convert characters to uppercase when working with text.
- **Return Value**: Returns the uppercase equivalent if the character is lowercase; otherwise, returns the character unchanged.

### [tolower](tolower.c)

- **Description**: Converts an uppercase letter to lowercase.
- **Library**: <ctype.h>
- **Error Handling**: Does not explicitly handle errors.
- **Recommended Use**: Convert characters to lowercase when working with text.
- **Return Value**: Returns the lowercase equivalent if the character is uppercase; otherwise, returns the character unchanged.

### [ft_substr](ft_substr.c)

- **Description**: Allocates (using malloc) and returns a substring from the string `s`. The substring starts at index `start` and has a maximum length `len`.
- **Library**: Custom implementation.
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Extract a portion of a string.
- **Return Value**: The resulting substring or NULL if memory allocation fails.

### [ft_strjoin](ft_strjoin.c)

- **Description**: Allocates (using malloc) and returns a new string, which is the result of concatenating `s1` and `s2`.
- **Library**: Custom implementation.
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Concatenate two strings into a new string.
- **Return Value**: The resulting new string or NULL if memory allocation fails.

### [ft_strtrim](ft_strtrim.c)

- **Description**: Allocates (using malloc) and returns a copy of `s1` with the characters specified in `set` removed from the start and end.
- **Library**: Custom implementation.
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Trim unwanted characters from both ends of a string.
- **Return Value**: The trimmed string or NULL if memory allocation fails.

### [ft_split](ft_split.c)

- **Description**: Splits the string `s` into an array of strings using the character `c` as a delimiter.
- **Library**: Custom implementation.
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Split a string into an array of substrings based on a delimiter.
- **Return Value**: An array of resulting strings or NULL if memory allocation fails.

### [ft_itoa](ft_itoa.c)

- **Description**: Converts the integer `n` to an ASCII string.
- **Library**: Custom implementation.
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Convert an integer to a string representation.
- **Return Value**: The resulting string or NULL if memory allocation fails.

### [ft_strmapi](ft_strmapi.c)

- **Description**: Applies the function `f` to each character of the string `s` to create a new string resulting from successive applications of `f`.
- **Library**: Custom implementation.
- **Error Handling**: Returns NULL if memory allocation fails.
- **Recommended Use**: Apply a function to each character of a string to create a new modified string.
- **Return Value**: The resulting string created by successive applications of `f`.

### [ft_striteri](ft_striteri.c)

- **Description**: Applies the function `f` to each character of the string `s`, passing its index as the first argument. Each character is passed by value to `f` for modification if needed.
- **Library**: Custom implementation.
- **Error Handling**: None.
- **Recommended Use**: Modify each character of a string in place based on its index.
- **Return Value**: No return value.

### [ft_putchar_fd](ft_putchar_fd.c)

- **Description**: Outputs the character `c` to the specified file descriptor.
- **Library**: Custom implementation.
- **Error Handling**: None.
- **Recommended Use**: Output a character to a file or standard output.
- **Return Value**: No return value.

### [ft_putstr_fd](ft_putstr_fd.c)

- **Description**: Outputs the string `s` to the specified file descriptor.
- **Library**: Custom implementation.
- **Error Handling**: None.
- **Recommended Use**: Output a string to a file or standard output.
- **Return Value**: No return value.

### [ft_putendl_fd](ft_putendl_fd.c)

- **Description**: Outputs the string `s` to the specified file descriptor, followed by a newline.
- **Library**: Custom implementation.
- **Error Handling**: None.
- **Recommended Use**: Output a string followed by a newline to a file or standard output.
- **Return Value**: No return value.

### [ft_putnbr_fd](ft_putnbr_fd.c)

- **Description**: Outputs the number `n` to the specified file descriptor.
- **Library**: Custom implementation.
- **Error Handling**: None.
- **Recommended Use**: Output an integer to a file or standard output.
- **Return Value**: No return value.
