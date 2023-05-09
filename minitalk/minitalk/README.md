<div align=center >
<h1>💬 minitalk</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/libft"><img src="https://user-images.githubusercontent.com/112257466/214543836-5a3bb6ab-31bd-4872-87bf-4b3a3cf734f6.png"/></a>
</div>

<br/>

##### _Summary: The purpose of this project is to code a small data exchange program using UNIX signals._

_요약: 이번 프로젝트의 목표는 UNIX 신호를 이용해 데이터를 주고받는 작은 프로그램을 작성해보는 것입니다._

<br>

# Contents

| Chapter |                     Contents                     | page |
| :-----: | :----------------------------------------------: | :--: |
|    I    |            [**Foreword**](#Chapter-1)            |  2   |
|   II    |      [**Common Instructions**](#Chapter-2)       |  3   |
|   III   |         [**Mandatory part**](#Chapter-3)         |  5   |
|   IV    |           [**Bonus part**](#Chapter-4)           |  6   |
|    V    | [**Submission and peer correction**](#Chapter-5) |  7   |

<br>

# Chapter 1

## Foreword

##### _The cis-3-Hexen-1-ol, also known as (Z)-3-hexen-1-ol and leaf alcohol, is a colorless oily liquid with an intense grassy-green odor of freshly cut green grass and leaves._

(Z)-3-hexen-1-ol 또는 잎 알코올이라고도 알려져 있는 cis-3-Hexen-1-ol은 갓 잘라낸 녹색 풀과 잎의 강렬한 풀 향이 나는 무색의 기름기 있는 액체입니다.

##### _It is produced in small amounts by most plants and it acts as an attractant to many predatory insects. cis-3-Hexen-1-ol is a very important aroma compound that is used in fruit and vegetable flavors and in perfumes._

이 액체는 대부분의 식물에게서 조금씩 생산되며, 포식성 곤충들을 많이 끌어들입니다. cis-3-Hexen-1-ol은 과일과 채소의 맛을 구현하거나 향수를 만들 때 사용되는 매우 중요한 향료입니다.

##### _The yearly production is about 30 tonnes._

매 년 생산량은 약 30톤입니다.

<br>

# Chapter 2

## Common Instructions

- ##### _Your project must be written in C._

  여러분의 프로젝트는 C언어로 작성되어야 합니다.

- ##### _Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside._

  프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 존재할 경우, 그 또한 norm 검사에 포함되며 norm error가 있을 시 0점을 받게 됩니다.

- ##### _Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation._

  정의되지 않은 동작을 제외하고, 함수들은 예기치 않게 중단되어서는 안 됩니다. (예를 들어, segmentation fault, bus error, double free 등) 만약 여러분의 프로그램이 예기치 않게 종료된다면, 제대로 동작하지 않은 것으로 간주되어 평가에서 0점을 받게 됩니다.

- ##### _All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated._

  필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용납될 수 없습니다.

- ##### _If the subject requires it, you must submit a `Makefile` which will compile your source files to the required output with the flags `-Wall`, `-Wextra` and `-Werror`, and your Makefile must not relink._

  과제에서 필요한 경우, `-Wall -Wextra -Werror` 플래그를 지정하여 컴파일을 수행하는 `Makefile`을 제출해야 합니다. Makefile은 relink 되어서는 안 됩니다.

- ##### _Your `Makefile` must at least contain the rules $(NAME), all, clean, fclean and re._

  `Makefile`은 최소한 `$(NAME), all, clean, fclean, re` 규칙을 포함해야 합니다.

- ##### _To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file \_`bonus.{c/h}`. Mandatory and bonus part evaluation is done separately._

  프로젝트에 보너스를 제출하려면, Makefile에 `bonus` 규칙을 포함해야 합니다. 이 보너스 규칙은 프로젝트의 메인 파트에서 금지되었던 모든 다양한 헤더, 라이브러리, 또는 함수들을 추가하여야 합니다. 보너스 과제는 반드시 \_`bonus.{c/h}`라는 별도의 파일에 있어야 합니다. 반드시 수행하여야 하는 메인 파트의 평가와 보너스 파트의 평가는 별도로 이뤄집니다.

- ##### _If your project allows you to use your `libft`, you must copy its sources and its associated `Makefile` in a `libft` folder with its associated `Makefile`. Your project’s `Makefile` must compile the library by using its `Makefile`, then compile the project._

  만일 프로젝트에서 여러분의 `libft` 사용을 허용한다면, libft 소스들과 관련 `Makefile`을 함께 루트 폴더 안에 있는 `libft` 폴더에 복사해야 합니다. 프로젝트의 `Makefile`은 우선 `libft`의 `Makefile`을 사용하여 라이브러리를 컴파일한 다음, 프로젝트를 컴파일해야 합니다.

- ##### _We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating._

  **이 과제물을 제출할 필요가 없고, 채점 받을 필요가 없을지라도,** 저희는 여러분들이 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 이것은 여러분의 과제물과 동료들의 과제물을 쉽게 테스트할 수 있게 도울 것입니다. 또한, 평가를 진행할 때 이러한 테스트 프로그램들이 특히 유용하다는 사실을 알게 될 것입니다. 평가 시에는 여러분의 테스트 프로그램과 평가 받는 동료의 테스트 프로그램들을 당연히 자유롭게 사용할 수 있습니다.

- ##### _Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop._

  할당된 git 저장소에 과제물을 제출하세요. 오직 git 저장소에 있는 과제물만 등급이 매겨질 것입니다. Deepthought가 평가하는 과제의 경우엔, 동료평가 이후에 Deepthought가 수행됩니다. 만약 Deepthought 평가 중에 오류가 발생한다면, 그 즉시 평가는 중지될 것입니다.

- ##### _The executable files must be named client and server._

  실행 파일명은 반드시 `client`와 `server` 이어야 합니다.

- ##### _You have to handle errors sensitively. In no way can your program quit unexpectedly (Segmentation fault, bus error, double free, etc)._

  여러분은 반드시 오류를 세심하게 처리하셔야 합니다. 어떠한 이유 (Segmentation fault, bus error, double free 등) 에서도 프로그램이 예상치 못하게 종료되면 안 됩니다.

- ##### _Your program cannot have memory leaks._

  프로그램에 메모리 누수가 발생하면 안 됩니다.

- ##### _You can use one global variable but it must be justified._

  전역 변수는 최대 한 개만 사용 가능하며, 정당한 이유가 있어야 합니다.

- ##### _On the mandatory part you are allowed to use the following functions:_

  필수 파트에서는 다음과 같은 함수들을 사용 가능합니다 :

  - `write`
  - `ft_printf` 와 그에 관련된 **여러분이 작성한** 파일들
  - `signal`
  - `sigemptyset`
  - `sigaddset`
  - `sigaction`
  - `kill`
  - `getpid`
  - `malloc`
  - `free`
  - `pause`
  - `sleep`
  - `usleep`
  - `exit`

<br>

# Chapter 3

## Mandatory part

- ##### _You must create a communication program in the form of a client and server._

  여러분은 클라이언트와 서버로 이루어진 통신 프로그램을 작성하여야 합니다.

- ##### _The server must be launched first, and after being launched it must display its PID._

  서버가 먼저 실행되어야 하며, 실행된 후에 자기 자신의 PID를 출력하여야 합니다.

- ##### _The client will take as parameters:_

  클라이언트는 다음과 같은 인자값을 받습니다:

  - ##### _The server PID._

    서버 PID

  - ##### _The string that should be sent._

    서버로 전송할 문자열

- ##### _The client must communicate the string passed as a parameter to the server. Once the string has been received, the server must display it._

  클라이언트는 인자로 들어온 문자열을 서버로 전송할 수 있어야 합니다. 서버에서는 문자열을 수신받은 후, 이를 출력하여야 합니다.

- ##### _Communication between your programs should ONLY be done using UNIX signals._

  여러분의 프로그램 끼리의 통신은 **반드시** UNIX 시그널을 이용해서만 이루어져야 합니다.

- ##### _The server must be able to display the string pretty quickly. By quickly we mean that if you think it is too long, then it is probably too long (hint: 1 second for 100 characters is COLOSSAL)_

  서버는 문자열을 최대한 빠르게 출력하여야 합니다. "빠르게" 라 함은, 만약 문자열 수신이 너무 오래 걸리는 것이 느껴진다면 실제로도 꽤 느리게 동작하는 편이라고 생각하시면 됩니다 (힌트를 드리자면, 100글자를 전송하는데 1초가 소요되면 **굉장히 느린** 겁니다)

- ##### _Your server should be able to receive strings from several clients in a row, without needing to be restarted._

  여러분의 서버는 도중에 재시작할 필요 없이, 여러 클라이언트로부터 문자열을 연속적으로 수신받아야 합니다.

- ##### _You can only use the two signals `SIGUSR1` and `SIGUSR2`._

  `SIGUSR1` 과 `SIGUSR2` 단 두 개의 시그널만 사용하여야 합니다.

> ⚠️ <br>
>
> ##### _Linux system do NOT queue signals when you already have pending signal of this type! bonus time?_
>
> 리눅스 시스템은 같은 유형의 시그널이 이미 보류 중일 경우, 시그널을 대기열에 넣지 않습니다. 보너스 과제 한번 해 보실래요?

<br>

# Chapter 4

## Bonus part

- ##### _The server confirms every signal received by sending a signal to the client._

  서버는 시그널이 들어올 때마다 클라이언트에 답장 시그널을 보내는 것으로 시그널이 잘 수신되었음을 보장하여야 합니다.

- ##### _support Unicode characters!_

  유니코드 문자열을 지원해 보세요!

<br>

# Chapter 5

## Submission and peer correction

- ##### _Submit your work on your `GiT` repository as usual. Only the work on your repository will be graded._

  항상 그래왔듯, 여러분의 결과물을 `GIT` 레포지토리에 제출하세요. 레포지토리에 있는 과제물만이 채점될 것입니다.
