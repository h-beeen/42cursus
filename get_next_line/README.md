<div align=center >
<h1>📖 get_next_line</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/get_next_line"><img src="https://user-images.githubusercontent.com/112257466/213332345-c1755de6-ee52-4b60-b8aa-2c4c1bece0f4.png"></a>
</div>

<p align="center">
	<b><i>42Cursus 3rd Project<br/>
  	Reading a line on a fd is way too tedious</i></br></br>
</p>
	<h3 align="center">
	<a href="https://github.com/h-beeen/42cursus/tree/master/ft_printf#-about-the-project">About</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/ft_printf#%EF%B8%8F-usage">Usage</a>
	</h3>
	<p align="center">
	<img alt="Github repo file count" src="https://img.shields.io/github/directory-file-count/h-beeen/42Cursus/get_next_line/get_next_line?logo=c&style=for-the-badge" /> <img src="https://img.shields.io/badge/100/100-007396?style=for-the-badge&logo=Starship&label=Score&logoColor=white&color=darkgreen"> <img src="https://img.shields.io/badge/2023&brvbar;01&brvbar;27-007396?style=for-the-badge&logo=42&label=completed&logoColor=white&color=black">
	</p>

---

## 💡 About the project

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

	You will understand how files are opened, read and closed in an OS,
	and how they are interpreted by a programming language for further analysis.

	This task is crucial to understand for a future programmer 
	since much of the time is basedon manipulating files 
	for data management and persistence.

	This project consists of coding a function that returns one line at a time from a text file.

- For more detailed information, look at the [**subject of this project**](/get_next_line/get_next_line/README.md/).


## 🛠️ Usage

### Requirements

- The function is written in C language and thus needs the <br/> **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**① Using it in your code**

- To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

- And, when compiling your code, add the source files and the required flag:

```shell
$ get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

### Testing

- You only have to edit the get_next_line.c file and uncomment the main function and headers inside it. <br/>
You can edit test.txt files to put another text if you wish to test othe cases. <br/>
Then simply run this command (change "xx" with desired buffer size) :

```shell
$ gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c main.c

$ ./a.out
```