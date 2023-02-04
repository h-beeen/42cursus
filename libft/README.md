<div align=center >
<h1>🧰 libft</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/libft"><img src="https://user-images.githubusercontent.com/112257466/213332349-fbcc97f6-2e2d-472c-8ef9-a015662a2fdb.png"/></a>
</div>
<br/>


<p align="center">
	<b><i>42Cursus 1st Project<br/>
  	My Very First Own Library</i></br></br>
</p>
	<h3 align="center">
	<a href="https://github.com/h-beeen/42cursus/tree/master/libft#-about-the-project">About</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/libft#-list-of-functions">Function</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/libft#%EF%B8%8F-usage">Usage</a>
	</h3>
	<p align="center">
	<img alt="Github repo file count" src="https://img.shields.io/github/directory-file-count/h-beeen/42Cursus/libft/libft?logo=c&style=for-the-badge" /> <img src="https://img.shields.io/badge/125/100-007396?style=for-the-badge&logo=42&label=Score&logoColor=white&color=darkgreen"> <img src="https://img.shields.io/badge/2022&brvbar;11&brvbar;24-007396?style=for-the-badge&logo=Starship&label=completed&logoColor=white&color=black">
	</p>

---

## 💡 About the project

> _The aim of this project is to code a C library <br/> regrouping usual functions that you'll be allowed to use in all your other projects._

	Programming in C can be very tedious 
	when you don't have access to the very useful standard functions.
	
	This project gives you the opportunity to rewrite 
	those functions to understand them and learn to use them.

	The library will help you for your future projects in C. 
	Through this project, you have the opportunity
	to extend your list of functions in your own way!

- For more detailed information, look at the [**subject of this project**](/libft/libft/README.md/).

---

## 📖 List of functions:


### ① Functions from `<ctype.h>` library

* [`ft_isascii`](/libft/libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](/libft/libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](/libft/libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](/libft/libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](/libft/libft/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](/libft/libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](/libft/libft/ft_toupper.c)			- lower case to upper case letter conversion.

### ② Functions from `<stdlib.h>` library

* [`ft_atoi`](/libft/libft/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](/libft/libft/ft_calloc.c)	- memory allocation.

### ③ Functions from `<strings.h>` library

* [`ft_bzero`](/libft/libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](/libft/libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](/libft/libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](/libft/libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](/libft/libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](/libft/libft/ft_memcpy.c)		- copy memory area.

### ④ Functions from `<string.h>` library

* [`ft_strlen`](/libft/libft/ft_strlen.c)				- find length of string.
* [`ft_strchr`](/libft/libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](/libft/libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](/libft/libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](/libft/libft/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](/libft/libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](/libft/libft/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](/libft/libft/ft_strlcat.c)			- size-bounded string concatenation.

### ⑤ Non-standard functions

* [`ft_itoa`](/libft/libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](/libft/libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](/libft/libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](/libft/libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](/libft/libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](/libft/libft/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](/libft/libft/ft_striteri.c)			- 
* [`ft_putchar_fd`](/libft/libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](/libft/libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](/libft/libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](/libft/libft/ft_putnbr_fd.c)		- output integer to given file.

### ⑥ [BONUS] Linked list functions 

* [`ft_lstnew`](/libft/libft/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](/libft/libft/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](/libft/libft/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](/libft/libft/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](/libft/libft/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](/libft/libft/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](/libft/libft/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](/libft/libft/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](/libft/libft/ft_lstmap.c)				- apply function to content of all list's elements into new list.

---

## 🛠️ Usage

### Requirements

- The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

<br/>

### Instructions

- Compiling the library

- To compile the library, go to its path and run:

- For all mandatory functions:

```shell
$ make
```

- For bonus functions:

```shell
$ make bonus
```
<br/>

**2. Cleaning all binary (.o) and executable files (.a)**

+ To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

<br/>

**3. Using it in your code**

- To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```