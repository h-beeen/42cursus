<div align=center >
<h1>🎮 so_long</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/so_long"><img src="https://user-images.githubusercontent.com/112257466/214543593-e3a47ed6-e31f-414e-ade0-fba1cee17371.png"/></a>
</div>
<br/>

##### _And thanks for all the fish!_

그리고 물고기는 고마웠어요.

##### _Summary: This project is a very small 2D game. It is built to make you work with textures, sprites. And some very basic gameplay elements._

_요약: 이 프로젝트는 아주 간단한 2D 게임을 만들어 볼 겁니다. 텍스쳐, 스프라이트, 기본적인 게임플레이 요소들을 다뤄볼 있도록 설계되어 있어요._


<br>

# **Contents**

| Chapter | Contents                                   | page |
| :-----: | :----------------------------------------- | :--: |
|    1    | [**Foreword**](#Chapter-1)                 |  2   |
|    2    | [**Goals**](#Chapter-2)                    |  3   |
|    3    | [**Common Instructions**](#Chapter-3)      |  4   |
|    4    | [**Mandatory part - So Long**](#Chapter-4) |  5   |
|    5    | [**Bonus part**](#Chapter-5)               |  8   |
|    6    | [**Examples**](#Chapter-6)                 |  9   |

<br>

# **Chapter 1**

## Foreword

##### _Being a developer is a great thing for creating your own game._

개발자가 된다는 건 스스로 게임을 만들기에 정말 좋은 요건이기도 하죠.

##### _But a good game needs some good assets._

하지만 좋은 게임을 만들기 위해선 좋은 자료들 또한 필요하지요.

##### _for 2D games, you should search for tiles, tilesets, sprites, and sprite sheets._

2D 게임을 만들기 위해선, 맵 타일이나 타일셋, 스프라이트, 스프라이트 시트 등이 필요합니다.

##### _Thankfully some talented artists are willing to share their works on platforms like: [itch.io](https://itch.io/game-assets/free/tag-sprites)_

감사하게도! [이곳처럼](https://itch.io/game-assets/free/tag-sprites) 몇몇 예술가분들께서 작업물을 공유해주신 공간이 있습니다.

##### _Whatever you do try to respect the works of others._

여러분이 무엇을 하던지간에, 다른 사람들의 창작물을 존중해주세요.

<br>

# **Chapter 2**

## Goals

이번 프로젝트의 목표는 이전에 진행했던 이러한 프로젝트와 비슷합니다 : 엄격함 (Rigor), `C`언어 사용하기, 기본적인 알고리즘 사용하기, 정보 검색 등

그래픽 디자인 프로젝트로서, `so long`은 창, 색상, 이벤트, 모양 채우기 등과 같은 분야에서 여러분의 능력 향상을 도울 것입니다.

<br>

# Chapter 2

## Common Instructions

- ##### _Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside._

  프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 존재할 경우, 그 또한 norm 검사에 포함되며 norm error가 있을 시 0점을 받게 됩니다.

- ##### _Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation._

  정의되지 않은 동작을 제외하고, 여러분이 작성하신 프로그램이 예기치 않게 중단되어서는 안 됩니다. (예를 들어, segmentation fault, bus error, double free 등) 만약 여러분의 프로그램이 예기치 않게 종료된다면, 제대로 작동하지 않은 것으로 간주되어 평가에서 0점을 받게 됩니다.

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

<br>

# **Chapter 4**

## Mandatory part - so long

| **프로그램 이름**            | `so_long`                                                                                                                                                                                                 |
| ---------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **제출할 파일**              | `제작에 필요한 모든 파일들`                                                                                                                                                                               |
| **Makefile 규칙**            | `all, clean, fclean, re, bonus`                                                                                                                                                                           |
| **인자**                     | `\*.ber 형식의 맵`                                                                                                                                                                                        |
| **사용가능한 <br>외부 함수** | - `open, close, read, write, printf, malloc, free, perror, strerror, exit` <br> - `MinilibX 라이브러리 내의 모든 함수들`                                                                                  |
| **직접 만든 libft**          | `사용 가능`                                                                                                                                                                                               |
| **설명**                     | `여러분은 돌고래가 물고기 몇 마리를 잡아먹은 뒤 지구를 탈출하는 작은 2D 게임을 만들어야 합니다. 굳이 돌고래나 물고기가 될 필요는 없습니다. 주인공이 특정 수집품을 모은 뒤 공간을 떠나는 방식이면 됩니다.` |

<br>

##### _The constraints are as follows:_

지켜야 할 사항은 다음과 같습니다:

- ##### _You must use the miniLibX. Either the version that is available on the operating system, or from its sources. If you choose to work with the sources, you will need to apply the same rules for your libft as those written above in Common Instructions part._

  반드시 miniLibX를 사용해야 합니다. (운영체제에서 이용 가능한 라이브러리와 과제에서 제공되는 소스 중 하나를 사용하셔야 합니다) 만약 제공받은 소스를 이용해 작업하기로 했다면, Libft의 **공통 지침** (Common Instructions) 과 같은 규칙을 따라야 합니다.

- ##### _The management of your window must remain smooth: changing to another window, minimizing, etc._

  작업 창 관리는 부드럽게 동작하여야 합니다. (창 최소화, 다른 창으로 전환 등의 동작)

- ##### _examples are given with a dolphin theme but you can use anything you want._

  예시로는 물고기를 잡아먹는 돌고래를 들었지만, 주제는 어떤 것으로 정하셔도 상관 없습니다.

- ##### _The map will be constructed with 3 components walls, collectibles, and free space._

  지도는 세 가지 요소들로 구성되어 있습니다: 벽, 수집품, 그리고 빈 공간

- ##### _The player’s goal is to collect all collectibles present on the map then escape with minimal movement._

  플레이어의 목표는 모든 수집품을 모으고 최소한의 움직임으로 맵을 탈출하는 것입니다.

- ##### _At every move the current number of movements must be displayed in the shell._

  각 움직임마다 현재까지 움직인 횟수가 쉘에 출력되어야 합니다.

- ##### _The player must be able to move: up, down, left, right._

  플레이어는 다음 방향으로 움직여야 합니다: 상하좌우

- ##### _You will use a 2D view (top-down or profile)._

  게임은 2D 시점으로 제작하여야 합니다. (탑뷰 또는 프로필)

- ##### _The game doesn’t need to be real-time._

  실시간으로 진행되는 게임일 필요는 없습니다.

- ##### _player cannot move into walls._

  플레이어는 벽을 뚫고 지나갈 수 없습니다.

- ##### _The program displays the image in a window and respects the following rules:_

  프로그램은 다음과 같은 규칙을 따르며 이미지를 화면에 표시하여야 합니다:

  - ##### _The W, A, S, and D keys will be used to move the main character._

    W, A, S, D 키를 이용하여 주인공을 조작합니다.

  - ##### _Pressing ESC must close the window and quit the program cleanly._

    `ESC`는 창을 닫고 게임을 정상적으로 종료합니다.

  - ##### _Clicking on the red cross on the window’s frame must close the window and quit the program cleanly._

    창 좌상단의 빨간 버튼 (mac) 또는 우상단의 빨간 X (windows) 를 누르면 창을 닫고 게임을 정상적으로 종료합니다.

  - ##### _The use of images of the minilibX is strongly recommended._

    `minilibX`의 `images`를 사용하는 것을 강력히 추천합니다!

- ##### _Your program must take as a first argument a map description file with the `.ber` extension._

  여러분의 프로그램은 `.ber` 확장자의 파일을 첫 번째 인자로 받아야 합니다.

  - ##### _The map must be composed of only 5 possible characters: 0 for an empty space, 1 for a wall, C for a collectible, E for map exit and P for the player’s starting position._

    지도는 단 5개의 가능한 문자열로만 구성되어야 합니다: `0`은 빈 공간, `1`은 벽, `C`는 수집품, `E`는 맵의 출구, `P`는 주인공의 시작지점입니다.

  - ##### _This is a simple valid map:_

    다음은 간단한 지도의 예시입니다:

    ```
    1111111111111
    10010000000C1
    1000011111001
    1P0011E000001
    1111111111111
    ```

  - ##### _The map must be closed/surrounded by walls, if not the program must return an error._

    지도는 벽으로 둘러싸여 있어야 합니다. 그렇지 않으면 에러를 반환해야 합니다.

  - ##### _Map must have at least one exit, one collectible, and one starting position._

    지도는 최소한 하나의 출구, 하나의 물고기 (수집품), 하나의 시작 지점을 포함해야 합니다.

  - ##### _You don’t need to check if there’s a valid path in the map._

    지도에서 출구로 가는 길의 유무 판단 (검증)은 굳이 해주지 않으셔도 됩니다.

  - ##### _The map must be rectangular._

    지도는 반드시 직사각형 모양이어야 합니다.

  - ##### _You must be able to parse any kind of map, as long as it respects the rules of the map._

    이상의 규칙을 준수한 모든 종류의 지도를 파싱할 수 있어야 합니다.

  - ##### _Another minimal `.ber` map:_

    또 하나의 간단한 `.ber` 지도의 예시입니다:

    ```
    1111111111111111111111111111111111
    1E0000000000000C00000C000000000001
    1010010100100000101001000000010101
    1010010010101010001001000000010101
    1P0000000C00C0000000000000000000C1
    1111111111111111111111111111111111
    ```

  - ##### _If any misconfiguration of any kind is encountered in the file, the program must exit properly and return "Error\n" followed by an explicit error message of your choice._

    지도 파일에서 어떠한 허점이 발견된다면, 프로그램은 "Error\n" 과 여러분이 직접 정한 에러 메시지를 출력한 후 제대로 종료되어야 합니다.

<br>

# **Chapter 5**

## Bonus part

> ⚠️ <br>
>
> ##### _Bonuses will be evaluated only if your mandatory part is PERFECT. By PERFECT we naturally mean that it needs to be complete, that it cannot fail, even in cases of nasty mistakes like wrong uses, etc. It means that if your mandatory part does not obtain ALL the points during the grading, your bonuses will be entirely IGNORED._
>
> 보너스는 필수로 구현해야 하는 파트가 **완벽할 때**만 평가될 것입니다. 저희가 말하는 '완벽함' 이란, 어떠한 경우에도 - 잘못된 사용과 같은 끔찍한 실수 등 - 실패하지 않고 동작해야 한다는 의미입니다. 쉽게 말하자면, 필수로 구현해야 하는 파트에서 **만점**을 받지 못한다면, 보너스는 완전히 '**무시될**' 것입니다.

##### _You are allowed to use other functions to complete the bonus part as long as their use is justified during your evaluation. Be smart!_

보너스 파트를 완성하기 위해서 다른 함수들을 사용하는 것이 허용됩니다! 다만 평가 시에 왜 이 함수를 사용하였는지 정당한 이유를 들어 설명하여야 해요. 현명하게 작업하세요!

##### _Bonus list:_

보너스 리스트:

- ##### _enemy patrols that cause the player to lose in case of contact._

  적 추가. 주인공이 적에게 닿으면 게임에서 패배합니다.

- ##### _There’s some sprite animation._

  스프라이트에 움직임을 주는 건 어떨까요?

- ##### _Movement count is directly displayed on the screen instead of shell output_

  쉘 대신, 화면상에 현재까지 움직인 횟수를 출력할 수도 있습니다.

> 💡 <br>
>
> ##### _You will be able to create better games later do not waste too much time!_
>
> 여러분은 뒤에서 더 재밌는 게임들을 만들어 볼 수 있어요.
> 너무 많은 시간을 할애하지 마세요!!!

![안녕히!](solong.png)

<br>

# **Chapter 6**

## Examples

<br>

![예시](examples.png)

##### _Figure VI.1: some so_long examples with some very bad (almost bonus worthy) taste in graphic design !_

사진 6.1: 그래픽 디자인 센스가 (보너스급으로) 많이 구린 `so_long` 예시들!
