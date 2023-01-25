<div align=center >
<h1>🧰 libft</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/libft"><img src="https://user-images.githubusercontent.com/112257466/213332349-fbcc97f6-2e2d-472c-8ef9-a015662a2fdb.png"/></a>
</div>
<br/>

##### My very first own library

나만의 첫 번째 라이브러리

##### _Summary: This project aims to code a C library regrouping usual functions that you’ll be use for all your next projects._

_요약: 이 프로젝트의 목적은 흔히 쓰이는 함수들을 재구성하여 이후의 모든 프로젝트에서 사용될 C 라이브러리를 제작하는 것입니다._

<br>

# Contents

| Chapter | Contents                                          | page |
| :-----: | :------------------------------------------------ | :--: |
|    1    | [**Introduction**](#Chapter-1)                    |  2   |
|    2    | [**Common Instrunctions**](#Chapter-2)            |  3   |
|    3    | [**Mandatory part**](#Chapter-3)                  |  4   |
|   3.1   | [**Technical Considerations**](#31-technical-considerations)      |  4   |
|   3.2   | [**Part 1 - Libc functions**](#32-part-1---libc-functions)       |  5   |
|   3.3   | [**Part 2 - Additional functions**](#33-part-2---additional-functions) |  6   |
|    4    | [**Bonus part**](#Chapter-4)                      |  10  |

<br>

# **Chapter 1**

## Introduction

<br>

##### _C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project allows you to re-write those functions, understand them, and learn to use them. This library will help you with all your future C projects. Take the time to expand your `libft` throughout the year. But always, make sure to check which functions are allowed !_

C 프로그래밍을 할 때 매우 유용한 표준 함수들을 사용할 수 없다면 굉장히 지루할 거예요. 이 프로젝트를 통해 이러한 표준 함수들을 구현하고, 이해하고, 어떻게 사용하는 지 배울 수 있습니다. 이 라이브러리는 나중에 진행할 C 프로젝트에도 도움이 될 거에요. 과제를 진행하시면서 여러분의 libft를 확장시켜 보세요. 물론, 어떤 함수가 사용가능한 함수인지 체크하는 것을 잊으시면 안 됩니다!

<br>

# **Chapter 2**

## Common Instructions

- ##### _Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside._

  프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 존재할 경우, 그 또한 norm 검사에 포함되며 norm error가 있을 시 0점을 받게 됩니다.

- ##### _Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation._

  정의되지 않은 동작을 제외하고, 여러분이 작성하신 프로그램이 예기치 않게 중단되어서는 안 됩니다. (예를 들어, segmentation fault, bus error, double free 등) 만약 여러분의 프로그램이 예기치 않게 종료된다면, 제대로 작동하지 않은 것으로 간주되어 평가에서 0점을 받게 됩니다.

- ##### _All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated._

  필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용납될 수 없습니다.

- ##### _If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, and your Makefile must not relink._

  과제에서 필요한 경우, **-Wall -Wextra -Werror** 플래그를 지정하여 컴파일을 수행하는 **Makefile**을 제출해야 합니다. Makefile은 relink 되어서는 안 됩니다.

- ##### _Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re._

  **Makefile**은 최소한 **$(NAME), all, clean, fclean, re** 규칙을 포함해야 합니다.

- ##### _To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file \_bonus.{c/h}. Mandatory and bonus part evaluation is done separately._

  프로젝트에 보너스를 제출하려면, Makefile에 **보너스 규칙**을 포함해야 합니다. 이 보너스 규칙은 프로젝트의 메인 파트에서 금지되었던 모든 다양한 헤더, 라이브러리, 또는 함수들을 추가하여야 합니다. 보너스 과제는 반드시 \_**bonus**.{c/h}라는 별도의 파일에 있어야 합니다. 반드시 수행하여야 하는 메인 파트의 평가와 보너스 파트의 평가는 별도로 이뤄집니다.

- ##### _If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project._

  만일 프로젝트에서 여러분의 libft 사용을 허용한다면, 소스들과 관련 Makefile을 함께 루트 폴더 안에 있는 libft 폴더에 복사해야 합니다. 프로젝트의 Makefile은 우선 libft의 Makefile을 사용하여 라이브러리를 컴파일한 다음, 프로젝트를 컴파일해야 합니다.

- ##### _We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating._

  **이 과제물을 제출할 필요가 없고, 채점 받을 필요가 없을지라도,** 저희는 여러분들이 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 이것은 여러분의 과제물과 동료들의 과제물을 쉽게 테스트할 수 있게 도울 것입니다. 또한, 평가를 진행할 때 이러한 테스트 프로그램들이 특히 유용하다는 사실을 알게 될 것입니다. 평가 시에는 여러분의 테스트 프로그램과 평가 받는 동료의 테스트 프로그램들을 당연히 자유롭게 사용할 수 있습니다.

- ##### _Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop._
  할당된 git 저장소에 과제물을 제출하세요. 오직 git 저장소에 있는 과제물만 등급이 매겨질 것입니다. Deepthought가 평가하는 과제의 경우엔, 동료평가 이후에 Deepthought가 수행됩니다. 만약 Deepthought 평가 중에 오류가 발생한다면, 그 즉시 평가는 중지될 것입니다.

<br>

# Chapter 3

## Mandatory part

| **프로그램 이름**            | libft.a                                                                                        |
| ---------------------------- | ---------------------------------------------------------------------------------------------- |
| **제출할 파일**              | `*.c, libft.h, Makefile`                                                                       |
| **Makefile**                 | 만드세요                                                                                       |
| **사용가능한 <br>외부 함수** | `자세한 내용은 아래를 확인하세요`                                                              |
| **설명**                     | `42 과정을 진행하면서 유용하게 쓰일 수 있는 함수들을 담은, 여러분만의 라이브러리를 작성하세요` |

<br>

## 3.1 Technical considerations

- ##### _It is forbidden to declare global variables._

  전역변수는 사용할 수 없습니다.

- ##### _If you need subfunctions to write a complex function, you should define these subfunctions as `static` to avoid publishing them with your library. It would be a good habit to do this in your future projects as well._

  복잡한 함수를 구현하기 위해 하위 함수 (subfunction) 을 작성해야 한다면, 이러한 함수들을 `static` 으로 선언하여 라이브러리와 함께 컴파일되는 것을 막는 것이 좋습니다. 이러한 습관은 나중의 프로젝트를 진행할 때도 도움이 될 거에요.

- ##### _Submit all files in the root of your repository._

  모든 파일을 레포지토리의 루트 폴더에 제출하세요.

- ##### _It is forbidden to submit unused files._

  사용하지 않는 파일의 제출은 금지됩니다.

- ##### _Every .c must compile with flags._

  모든 .c 파일은 플래그와 함께 컴파일되어야 합니다.

- ##### _You must use the command `ar` to create your library, using the command `libtool` is forbidden._

  반드시 `ar` 명령어를 사용하여 라이브러리를 생성하여야 합니다. `libtool` 명령어는 사용이 금지됩니다.

<br>

## 3.2 Part 1 - Libc functions

##### _In this first part, you must re-code a set of the `libc` functions, as defined in their `man`. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by "`ft_`". For instance, `strlen`becomes`ft_strlen`.

첫 번째 파트에서는, `man`에 정의되어 있는 그대로 `libc` 함수들을 새로 구현하셔야 합니다. 여러분의 함수들은 원본과 같은 프로토타입으로 선언되어야 하며, 같은 방식으로 동작해야 합니다. 다만 함수의 이름 앞에는 `"ft_"`를 붙여야 합니다. 예를 들면, `strlen`을 구현한 함수의 이름은 `ft_strlen`이 됩니다.

> ⚠️
>
> ##### Some of the functions’ prototypes you have to re-code use the "restrict" qualifier. This keyword is part of the c99 standard. It is therefore forbidden to include it in your prototypes and to compile it with the flag `-std=c99`.
>
> 여러분이 재구현하여야 하는 함수들 중 일부는 원본의 프로토타입에 "restrict" 한정자가 사용됩니다. 이 키워드는 c99 표준에 해당하므로, 여러분의 라이브러리 프로토타입들에 이 키워드를 포함시키고 `std=c99` 플래그를 사용하여 컴파일하는 것은 금지됩니다.

##### _You must re-code the following functions. These function do not need any external functions:_

아래의 함수들을 다시 구현하세요. 이 함수들은 외부 함수를 필요로 하지 않습니다 :

- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
- `strlen`, `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`, `strncmp`
- `toupper`, `tolower`, `strchr`, `strrchr`
- `memchr`, `memcmp`, `strnstr`, `atoi`

##### _You must also re-code the following functions, using the function "`malloc`":_

다음의 함수들은 외부 함수 `malloc` 을 사용하여 구현하세요 :

- `calloc`, `strdup`

<br>

## 3.3 Part 2 - Additional functions

##### _In this second part, you must code a set of functions that are either not included in the `libc`, or included in a different form. Some of these functions can be useful to write Part 1’s functions._

두 번째 파트에서는, `libc`에 포함되어 있지 않거나 다른 형식으로 포함된 함수들을 재구현하여야 합니다. 다음 함수들 중 일부는 Part 1 함수를 작성할 때 도움이 될 거에요.

<br>

| **함수 이름**                | ft_substr                                                                                                                                                                                                                                                                                                                                |
| ---------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `char *ft_substr(char const *s, unsigned int start, size_t len);`                                                                                                                                                                                                                                                                        |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                        |
| **매개변수**                 | `#1. 부분 문자열 (substring) 을 생성할 원본 문자열` <br> `#2. 부분 문자열의 맨 처음 인덱스` <br> `#3. 부분 문자열의 최대 길이`                                                                                                                                                                                                           |
| **반환값**                   | `부분 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                        |
| **사용가능한 <br>외부 함수** | `malloc`                                                                                                                                                                                                                                                                                                                                 |
| **설명**                     | _Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 원본 문자열 's' 로부터 부분 문자열을 생성하여 반환합니다.` <br>`부분 문자열은 인덱스 'start' 부터 시작하며, 최대 길이 'len'을 갖습니다.` |

<br>

| **함수 이름**                | ft_strjoin                                                                                                                                                                                                                                |
| ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `char *ft_strjoin(char const *s1, char const *s2);`                                                                                                                                                                                       |
| **제출할 파일**              | -                                                                                                                                                                                                                                         |
| **매개변수**                 | `#1. 접두 문자열 (prefix string)` <br> `#2. 접미 문자열 (suffix string)`                                                                                                                                                                  |
| **반환값**                   | `새로운 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                       |
| **사용가능한 <br>외부 함수** | `malloc`                                                                                                                                                                                                                                  |
| **설명**                     | _Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 문자열 's1' 과 's2' 를 이어붙인 새로운 문자열을 생성하여 반환합니다.` |

<br>

| **함수 이름**                | ft_strtrim                                                                                                                                                                                                                                                                           |
| ---------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **프로토타입**               | `char *ft_strtrim(char const *s1, char const *set);`                                                                                                                                                                                                                                 |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                    |
| **매개변수**                 | `#1. 양 쪽을 잘라낼 원본 문자열` <br> `#2. 제거될 문자들의 집합`                                                                                                                                                                                                                     |
| **반환값**                   | `문자가 제거된 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                           |
| **사용가능한 <br>외부 함수** | `malloc`                                                                                                                                                                                                                                                                             |
| **설명**                     | _Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 's1'의 양 쪽 끝에서 'set'에 지정된 문자들이 제거된 문자열 사본을 반환합니다.` |

<br>

| **함수 이름**                | ft_split                                                                                                                                                                                                                                                                                                                                                                  |
| ---------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `char **ft_split(char const *s, char c);`                                                                                                                                                                                                                                                                                                                                 |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                                         |
| **매개변수**                 | `#1. 분할할 문자열` <br> `#2. 구분자 (delimiter)`                                                                                                                                                                                                                                                                                                                         |
| **반환값**                   | `split을 통해 분할된 문자열의 배열. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                                   |
| **사용가능한 <br>외부 함수** | `malloc, free`                                                                                                                                                                                                                                                                                                                                                            |
| **설명**                     | _Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 구분자 'c' 를 기준으로 문자열 's'를 분할하여 그 결과를 담은 새로운 문자열 배열을 반환합니다. 문자열 배열의 끝은 NULL 포인터로 끝나야 합니다.` |

<br>

| **함수 이름**                | ft_itoa                                                                                                                                                                                                                                                                       |
| ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `char *ft_itoa(int n);`                                                                                                                                                                                                                                                       |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                             |
| **매개변수**                 | `#1. 변환할 정수`                                                                                                                                                                                                                                                             |
| **반환값**                   | `정수를 표현하는 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                  |
| **사용가능한 <br>외부 함수** | `malloc`                                                                                                                                                                                                                                                                      |
| **설명**                     | _Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 인자로 받은 정수를 나타내는 문자열을 반환합니다. 음수 또한 무조건 처리되어야 합니다.` |

<br>

| **함수 이름**                | ft_strmapi                                                                                                                                                                                                                                                                                                                                                                                                       |
| ---------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`                                                                                                                                                                                                                                                                                                                                                |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                                                                                |
| **매개변수**                 | `#1. 함수를 적용할 문자열` <br> `#2. 문자열의 각 문자에 적용할 함수`                                                                                                                                                                                                                                                                                                                                             |
| **반환값**                   | `원본 문자열에서 함수 'f'를 성공적으로 적용하여 생성된 결과 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                                          |
| **사용가능한 <br>외부 함수** | `malloc`                                                                                                                                                                                                                                                                                                                                                                                                         |
| **설명**                     | _Applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’._ <br> `문자열 's' 의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용합니다. 각 문자에 함수가 적용된 새로운 문자열을 생성합니다 (malloc(3) 을 이용하여 메모리를 할당)` |

<br>

| **함수 이름**                | ft_striteri                                                                                                                                                                                                                                                                                                                                                                                                    |
| ---------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`                                                                                                                                                                                                                                                                                                                                                   |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                                                                              |
| **매개변수**                 | `#1. 함수를 적용할 문자열` <br> `#2. 문자열의 각 문자에 적용할 함수`                                                                                                                                                                                                                                                                                                                                           |
| **반환값**                   | `없음`                                                                                                                                                                                                                                                                                                                                                                                                         |
| **사용가능한 <br>외부 함수** | `없음`                                                                                                                                                                                                                                                                                                                                                                                                         |
| **설명**                     | _Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary_ <br> `문자열 's' 의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용합니다. 또한 각 문자의 주소값이 'f' 함수의 두 번째 인자로 사용되며, 경우에 따라 수정될 수 있습니다.` |

<br>

| **함수 이름**                | ft_putchar_fd                                                                                                  |
| ---------------------------- | -------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_putchar_fd(char c, int fd);`                                                                          |
| **제출할 파일**              | -                                                                                                              |
| **매개변수**                 | `#1. 출력할 문자` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                         |
| **반환값**                   | `없음`                                                                                                         |
| **사용가능한 <br>외부 함수** | `write`                                                                                                        |
| **설명**                     | _Outputs the character ’c’ to the given file descriptor._ <br> `제공받은 파일 식별자에 문자 'c'를 출력합니다.` |

<br>

| **함수 이름**                | ft_putstr_fd                                                                                                  |
| ---------------------------- | ------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_putstr_fd(char *s, int fd);`                                                                         |
| **제출할 파일**              | -                                                                                                             |
| **매개변수**                 | `#1. 출력할 문자열` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                      |
| **반환값**                   | `없음`                                                                                                        |
| **사용가능한 <br>외부 함수** | `write`                                                                                                       |
| **설명**                     | _Outputs the string ’s’ to the given file descriptor._ <br> `제공받은 파일 식별자에 문자열 's'를 출력합니다.` |

<br>

| **함수 이름**                | ft_putendl_fd                                                                                                                                         |
| ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_putendl_fd(char *s, int fd);`                                                                                                                |
| **제출할 파일**              | -                                                                                                                                                     |
| **매개변수**                 | `#1. 출력할 문자열` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                                                              |
| **반환값**                   | `없음`                                                                                                                                                |
| **사용가능한 <br>외부 함수** | `write`                                                                                                                                               |
| **설명**                     | _Outputs the string ’s’ to the given file descriptor, followed by a newline._ <br> `제공받은 파일 식별자에 문자열 's'를 출력하고, 개행을 출력합니다.` |

<br>

| **함수 이름**                | ft_putnbr_fd                                                                                                 |
| ---------------------------- | ------------------------------------------------------------------------------------------------------------ |
| **프로토타입**               | `void ft_putnbr_fd(int n, int fd);`                                                                          |
| **제출할 파일**              | -                                                                                                            |
| **매개변수**                 | `#1. 출력할 정수` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                       |
| **반환값**                   | `없음`                                                                                                       |
| **사용가능한 <br>외부 함수** | `write`                                                                                                      |
| **설명**                     | _Outputs the integer ’n’ to the given file descriptor._ <br> `제공받은 파일 식별자에 정수 'n'를 출력합니다.` |

<br>

# Chapter 4

## Bonus part

##### _If you completed the mandatory part, you’ll enjoy taking it further. You can see this last section as Bonus Points._

필수 파트의 과제를 모두 수행하셨다면, 그보다 더 나아가는 것도 좋은 경험이 될 거에요. 이 마지막 섹션을 통해 보너스 점수를 얻어 보세요.

##### _Having functions to manipulate memory and strings is very useful, but you’ll soon discover that having functions to manipulate lists is even more useful._

메모리와 문자열을 다루는 함수는 아주 유용하게 사용할 수 있죠. 지금부터 여러분은 리스트를 다루는 함수가 얼마나 더 유용한 지 알 수 있을 거에요.

##### _`make bonus` will add the bonus functions to the `libft.a` library._

`make bonus` 는 `libft.a` 라이브러리에 보너스 함수들을 추가합니다.

##### _You’ll use the following structure to represent the elements of your list. This structure must be added to your `libft.h` file._

리스트의 요소들을 표현하기 위해 다음과 같은 구조체를 사용하세요. 이 구조체를 `libft.h` 파일에 추가하여야 합니다.

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}              t_list;
```

##### _Here is a description of the fields of the t_list struct:_

다음은 t_list 구조체의 각 필드에 대한 설명입니다 :

- ##### _`content` : The data contained in the element. The `void *` allows to store any kind of data._

  `content`: 요소에 포함된 데이터. `void *` 를 통해 어떠한 자료형의 값도 담을 수 있습니다.

- ##### _`next` : The next element’s address or `NULL` if it’s the last element._
  `next`: 다음 요소의 주소값. 만약 해당 요소가 마지막 요소라면, `NULL`을 가리킵니다.

##### _The following functions will allow you to easily use your lists._

다음의 함수들은 리스트를 쉽게 다룰 수 있도록 돕습니다.

<br>

| **함수 이름**                | ft_lstnew                                                                                                                                                                                                                                                                                                                                                                                 |
| ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `t_list *ft_lstnew(void *content);`                                                                                                                                                                                                                                                                                                                                                       |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                                                         |
| **매개변수**                 | `#1. 새로운 요소에 들어갈 content`                                                                                                                                                                                                                                                                                                                                                        |
| **반환값**                   | `새로운 요소 (element)`                                                                                                                                                                                                                                                                                                                                                                   |
| **사용가능한 <br>외부 함수** | `malloc`                                                                                                                                                                                                                                                                                                                                                                                  |
| **설명**                     | _Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL._ <br> `malloc(3) 을 통해 메모리를 할당하고 새로운 요소를 반환합니다. 요소 내의 변수 'content' 는 인자로 받아온 'content' 로 초기화되어야 합니다. 요소 내의 변수 'next'는 NULL로 초기화되어야 합니다.` |

<br>

| **함수 이름**                | ft_lstadd_front                                                                                         |
| ---------------------------- | ------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_lstadd_front(t_list **lst, t_list *new);`                                                      |
| **제출할 파일**              | -                                                                                                       |
| **매개변수**                 | `#1. 리스트의 맨 앞에 위치한 요소`<br>`#2. 리스트에 추가할 요소`                                        |
| **반환값**                   | `없음`                                                                                                  |
| **사용가능한 <br>외부 함수** | `없음`                                                                                                  |
| **설명**                     | _Adds the element ’new’ at the beginning of the list._ <br> `요소 'new'를 리스트의 맨 앞에 추가합니다.` |

<br>

| **함수 이름**                | ft_lstsize                                                                              |
| ---------------------------- | --------------------------------------------------------------------------------------- |
| **프로토타입**               | `int ft_lstsize(t_list *lst);`                                                          |
| **제출할 파일**              | -                                                                                       |
| **매개변수**                 | `#1. 리스트의 맨 앞에 위치한 요소`                                                      |
| **반환값**                   | `리스트의 길이`                                                                         |
| **사용가능한 <br>외부 함수** | `없음`                                                                                  |
| **설명**                     | _Counts the number of elements in a list._ <br> `리스트에 포함된 요소의 개수를 셉니다.` |

<br>

| **함수 이름**                | ft_lstlast                                                                                    |
| ---------------------------- | --------------------------------------------------------------------------------------------- |
| **프로토타입**               | `t_list *ft_lstlast(t_list *lst);`                                                            |
| **제출할 파일**              | -                                                                                             |
| **매개변수**                 | `#1. 리스트의 맨 앞에 위치한 요소`                                                            |
| **반환값**                   | `리스트의 맨 마지막 요소`                                                                     |
| **사용가능한 <br>외부 함수** | `없음`                                                                                        |
| **설명**                     | _Returns the last element of the list._ <br> `리스트의 맨 마지막에 위치한 요소를 반환합니다.` |

<br>

| **함수 이름**                | ft_lstadd_back                                                                                    |
| ---------------------------- | ------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_lstadd_back(t_list **lst, t_list *new);`                                                 |
| **제출할 파일**              | -                                                                                                 |
| **매개변수**                 | `#1. 리스트의 맨 앞에 위치한 요소의 포인터`<br>`#2. 리스트의 맨 끝에 추가할 요소`                 |
| **반환값**                   | `없음`                                                                                            |
| **사용가능한 <br>외부 함수** | `없음`                                                                                            |
| **설명**                     | _Adds the element ’new’ at the end of the list._ <br> `요소 'new'를 리스트의 맨 뒤에 추가합니다.` |

<br>

| **함수 이름**                | ft_lstdelone                                                                                                                                                                                                                                                                                                                                                      |
| ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_lstdelone(t_list *lst, void (*del)(void *));`                                                                                                                                                                                                                                                                                                            |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                                 |
| **매개변수**                 | `#1. 삭제할 요소`<br>`#2. 요소의 content 삭제에 사용되는 함수 포인터`                                                                                                                                                                                                                                                                                             |
| **반환값**                   | `없음`                                                                                                                                                                                                                                                                                                                                                            |
| **사용가능한 <br>외부 함수** | `free`                                                                                                                                                                                                                                                                                                                                                            |
| **설명**                     | _Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed._ <br> `첫 번째 인자값으로 받은 요소의 content를 두 번째 인자로 받은 함수 포인터를 이용해 해제하고, 요소 자체의 메모리를 해제합니다. next 포인터는 해제하면 안 됩니다.` |

<br>

| **함수 이름**                | ft_lstclear                                                                                                                                                                                                                                                                                                                                                 |
| ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_lstclear(t_list **lst, void (*del)(void *));`                                                                                                                                                                                                                                                                                                      |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                           |
| **매개변수**                 | `#1. 삭제할 요소의 포인터`<br>`#2. 요소의 content 삭제에 사용되는 함수 포인터`                                                                                                                                                                                                                                                                              |
| **반환값**                   | `없음`                                                                                                                                                                                                                                                                                                                                                      |
| **사용가능한 <br>외부 함수** | `free`                                                                                                                                                                                                                                                                                                                                                      |
| **설명**                     | _Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL._ <br> `함수 'del' 과 free(3) 을 이용하여 인자값으로 받은 요소와 그 뒤에 따라오는 리스트의 모든 요소들을 삭제하고 해제합니다. 마지막으로, 리스트의 포인터는 NULL로 설정되어야 합니다.` |

<br>

| **함수 이름**                | ft_lstiter                                                                                                                                                                                          |
| ---------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `void ft_lstiter(t_list *lst, void (*f)(void *));`                                                                                                                                                  |
| **제출할 파일**              | -                                                                                                                                                                                                   |
| **매개변수**                 | `#1. 리스트상의 요소`<br>`#2. 리스트 내에서 반복 적용될 함수 포인터`                                                                                                                                |
| **반환값**                   | `없음`                                                                                                                                                                                              |
| **사용가능한 <br>외부 함수** | `없음`                                                                                                                                                                                              |
| **설명**                     | _Iterates the list ’lst’ and applies the function ’f’ to the content of each element._ <br> `리스트 'lst' 를 순회하며, 리스트에 포함된 모든 요소들의 content에 함수 'f'를 반복적으로 적용시킵니다.` |

<br>

| **함수 이름**                | ft_lstmap                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| ---------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **프로토타입**               | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`                                                                                                                                                                                                                                                                                                                                                                                                                          |
| **제출할 파일**              | -                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| **매개변수**                 | `#1. 리스트상의 요소`<br>`#2. 리스트 내에서 반복 적용될 함수 포인터`<br>`#3. 필요할 경우, 요소의 content를 삭제하는 데에 사용되는 함수`                                                                                                                                                                                                                                                                                                                                                             |
| **반환값**                   | `새로운 리스트. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| **사용가능한 <br>외부 함수** | `malloc, free`                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| **설명**                     | _Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed._ <br> `리스트 'lst'의 요소들을 순회하며 각 요소의 content에 함수 'f'를 연속적으로 적용시킵니다. 또한 함수 'f'를 적용시킨 결과물들을 content로 담은 새로운 리스트를 생성합니다. 'del' 함수들은 필요 시 각 요소의 content를 삭제하는 데 사용됩니다.` |
