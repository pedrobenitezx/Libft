# LIBFT | 42 School

## C Function Library Project

This is the first project in a series where we implement and explore various functions from the C standard library. In this phase, we've recreated a set of essential functions often used in string and memory management in C. Below you'll find detailed explanations of each function, including their purpose, associated library, error handling details, potential use cases, and their return values.

| Function              | Description                                                                                           | Return Value                                              |
| --------------------- | ----------------------------------------------------------------------------------------------------- | --------------------------------------------------------- |
| ft_atoi               | Converts the initial portion of the string `str` to an integer.                                       | The converted value as `int`.                             |
| ft_bzero              | Sets all bytes in a block of memory to zero.                                                          | None.                                                     |
| ft_calloc             | Allocates memory for an array of `nmemb` elements of `size` bytes each and initializes all bytes to zero. | A pointer to the allocated memory or NULL if allocation fails. |
| ft_isalnum            | Checks if the given character is alphanumeric (letter or digit).                                      | 1 if the character is alphanumeric, 0 otherwise.          |
| ft_isalpha            | Checks if the given character is alphabetic (a-z, A-Z).                                              | 1 if the character is alphabetic, 0 otherwise.            |
| ft_isascii            | Checks if the given character is an ASCII character.                                                 | 1 if the character is ASCII, 0 otherwise.                 |
| ft_isdigit            | Checks if the given character is a digit (0-9).                                                      | 1 if the character is a digit, 0 otherwise.               |
| ft_isprint            | Checks if the given character is printable.                                                          | 1 if the character is printable, 0 otherwise.             |
| ft_itoa               | Converts the integer `n` to an ASCII string.                                                         | The resulting string or NULL if memory allocation fails.  |
| ft_memchr             | Scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`.      | A pointer to the matching byte or NULL if the character is not found. |
| ft_memcmp             | Compares the first `n` bytes of `s1` and `s2`.                                                       | An integer less than, equal to, or greater than zero depending on the comparison. |
| ft_memcpy             | Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas must not overlap.    | A pointer to `dest`.                                      |
| ft_memmove            | Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas may overlap.         | A pointer to `dest`.                                      |
| ft_memset             | Fills a block of memory with a specified value.                                                      | A pointer to the memory area `s`.                         |
| ft_putchar_fd         | Outputs the character `c` to the specified file descriptor.                                          | None.                                                     |
| ft_putendl_fd         | Outputs the string `s` to the specified file descriptor, followed by a newline.                      | None.                                                     |
| ft_putnbr_fd          | Outputs the number `n` to the specified file descriptor.                                             | None.                                                     |
| ft_putstr_fd          | Outputs the string `s` to the specified file descriptor.                                             | None.                                                     |
| ft_split              | Splits the string `s` into an array of strings using the character `c` as a delimiter.               | An array of resulting strings or NULL if memory allocation fails. |
| ft_strchr             | Returns a pointer to the first occurrence of the character `c` in the string `s`.                    | A pointer to the matched character or NULL if the character is not found. |
| ft_strdup             | Returns a pointer to a new string which is a duplicate of the string `s`.                            | A pointer to the duplicated string or NULL if insufficient memory is available. |
| ft_striteri           | Applies the function `f` to each character of the string `s`, passing its index as the first argument. Each character is passed by value to `f` for modification if needed. | None.                                                     |
| ft_strjoin            | Allocates (using malloc) and returns a new string, which is the result of concatenating `s1` and `s2`. | The resulting new string or NULL if memory allocation fails. |
| ft_strlcat            | Appends the NULL-terminated string `src` to the end of `dest`. It will append at most `size - strlen(dest) - 1` bytes, NULL-terminating the result. | The total length of the string it tried to create.        |
| ft_strlcpy            | Copies up to `size - 1` characters from the NULL-terminated string `src` to `dest`, NULL-terminating the result. | The total length of the string it tried to create.        |
| ft_strlen             | Calculates the length of a string.                                                                    | The number of characters in the string, excluding the null character. |
| ft_strmapi            | Applies the function `f` to each character of the string `s` to create a new string resulting from successive applications of `f`. | The resulting string created by successive applications of `f`. |
| ft_strncmp            | Compares at most the first `n` bytes of `s1` and `s2`.                                               | An integer less than, equal to, or greater than zero if `s1` is found to be less than, to match, or be greater than `s2`. |
| ft_strnstr            | Locates the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched. | A pointer to the beginning of the located substring, or NULL if the substring is not found. |
| ft_strrchr            | Returns a pointer to the last occurrence of the character `c` in the string `s`.                     | A pointer to the matched character or NULL if the character is not found. |
| ft_strtrim            | Allocates (using malloc) and returns a copy of `s1` with the characters specified in `set` removed from the start and end. | The trimmed string or NULL if memory allocation fails.     |
| ft_substr             | Allocates (using malloc) and returns a substring from the string `s`. The substring starts at index `start` and has a maximum length `len`. | The resulting substring or NULL if memory allocation fails. |
| ft_tolower            | Converts an uppercase letter to lowercase.                                                           | The lowercase equivalent if the character is uppercase; otherwise, the character unchanged. |
| ft_toupper            | Converts a lowercase letter to uppercase.                                                            | The uppercase equivalent if the character is lowercase; otherwise, the character unchanged. |
