<div align=center >
<h1>🔗 Born2beroot</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/Born2beroot"><img src="https://user-images.githubusercontent.com/112257466/215251718-eacac32b-5a95-41d0-949b-09684804ab2c.png"/></a>
</div>
<br/>
<br/>

##### Summary: This document is a System Administration related exercise.

요약 : 이 과제는 시스템(운영체제) 관리 관련 실습입니다.
<br>

<br>

# Contents
| Chapter | Contents                                         	| page |
| :-----: | :---------------------------------------------------| :--: |
|    1    | [**Preamble**](#Chapter-1)							|  2   |
|    2    | [**Introduction**](#Chapter-2)						|  3   |
|    3    | [**General guidelines**](#Chapter-3)				|  4   |
|	 4    | [**Mandatory part**](#Chapter-3-1)					|  5   |
|    5    | [**Bonus part**](#Chapter-3-2)						|  10  |
|    6    | [**Submission and peer-evaluation**](#Chapter-3-3)	|  12  |


<br>

# **Chapter 1**

## Introduction

<br>

##### _"YOU CAN DO ANYTHING YOU WANT TO DO<br>VIRTUAL MACHINE<br>THIS IS YOUR WORLD"_

<br/>

"당신이 원하는 것 무엇이든
<br>
가상 머신
<br>
당신만의 세계"
<br>

# **Chapter 2**

## Introduction

<br>

##### _This project aims to introduce you to the wonderful world of virtualization._
이 과제에서는 여러분에게 가상화의 멋진 세상을 소개해드리고자 합니다.

<br>

##### _You will create your first machine in VirtualBox (or UTM if you can’t use VirtualBox) under specific instructions. Then, at the end of this project, you will be able to set up your own operating system while implementing strict rules_
여러분은 VirtualBox를 통해서 (불가능하다면 UTM을 통해서) 주어진 요구사항들에 따라 첫 가상 머신을 만들 것입니다. 그리고 나면, 과제를 마칠 때 즈음 여러분은 엄격한 규칙들로 이루어진 자신만의 운영체제를 구현할 수 있을 것입니다.

<br>

# **Chapter 3**

## General guidelines

<br>

##### _The use of VirtualBox (or UTM if you can’t use VirtualBox) is mandatory._

VirtualBox를 사용하는 것(불가능하다면 UTM을 사용하는 것)이 기본 요구사항입니다.

<br>

##### _You only have to turn in a signature.txt file at the root of your repository. You must paste in it the signature of your machine’s virtual disk. Go to Submission and peer-evaluation for more information._

여러분은 repository의 root에 signature.txt 파일만 제출하여야 합니다. signature.txt에는 가상 머신의 디스크 이미지 파일의 signature를 붙여 넣어야 합니다. 더 많은 정보를 찾으시려면 Submission and peer-evaluation 항목을 참고하십시오.

<br>

# **Chapter 4**
## Mandatory part

<br>

##### _This project consists of having you set up your first server by following specific rules._

이 과제는 여러분의 첫 서버를 특정 규칙들에 따라 구현하게끔 할 것입니다.

<br>

> ##### _⚠️Since it is a matter of setting up a server, you will install the minimum of services. For this reason, a graphical interface is of no use here. It is therefore forbidden to install X.org or any other equivalent graphics server. Otherwise, your grade will be 0._

> ⚠️서버를 구성하는 것이 주요 사항이기 때문에, 최소한의 서비스만 설치하셔야 합니다. 이 때문에, 그래픽 인터페이스는 이 과제에서 사용되지 않습니다. 그래픽 인터페이스를 사용할 수 없으므로, X.org나 그에 상응하는 다른 그래픽 서버들은 설치할 수 없습니다. 만약 설치했다면, 0점을 받게될 것입니다.

<br>

##### _You must choose as an operating system either the latest stable version of Debian (no testing/unstable), or the latest stable version of Rocky. Debian is highly recommended if you are new to system administration._

여러분은 가장 최신의 stable 버전인 ___Debian___(testing/unstable 제외) 혹은, 가장 최신의 stable 버전인 ___Rocky___ 둘 중에 한 운영체제를 선택하셔야 합니다. 만약 시스템 관리가 처음이시라면, ___Debian___ 을 강력히 추전드립니다.

<br>

> ##### ℹ️ _setting up Rocky is quite complex. Therefore, you don’t have to set up KDump. However, SELinux must be running at startup and its configuration has to be adapted for the project’s needs. AppArmor for Debian must be running at startup too._

> ℹ️ Rocky를 세팅하는 것은 꽤 복잡합니다. 그렇기 때문에, 여러분은 KDump까지 설치할 필요는 없습니다. 하지만, SELinux는 실행되었을 때 반드시 작동하고 있어야하고, SELinux은 과제에서 요구하는 사항에 따라 구성되어있어야 합니다. Debian의 경우에는 AppArmor가 실행 시에 작동하고있어야 합니다.

<br>

##### _You must create at least 2 encrypted partitions using LVM. Below is an example of the expected partitioning:_
여러분은 LVM을 통해 최소 2개 이상의 암호화된(encrypted) 파티션을 생성해야 합니다. 요구되는 파티셔닝의 예시는 아래와 같습니다. (사진)

<br>

> ##### ℹ️During the defense, you will be asked a few questions about the operating system you chose. For instance, you should know the differences between aptitude and apt, or what SELinux or AppArmor is. In short, understand what you use!
평가를 진행하면서, 여러분은 여러분이 선택한 운영체제에 대한 질문들을 받게 될 것입니다. 예를 들면, apt와 aptitude의 차이점, 혹은 SElinux 또는 AppArmor가 무엇인지 등 말이죠.
요약하자면, 여러분이 사용하고 있는 것이 무엇인지 아셔야 합니다!

<br>

##### A SSH service will be running on port 4242 only. For security reasons, it must not be possible to connect using SSH as root.
SSH 서비스는 4242포트에서만 작동해야 합니다. 보안적인 이유로, root로는 SSH에 연결할 수 없어야 합니다.

<br>

> ##### ℹ️The use of SSH will be tested during the defense by setting up a new account. You must therefore understand how it works.
SSH의 용법은 평가를 진행하면서, 생성된 새 계정을 통해 테스트됩니다. 그러니 SSH가 어떻게 작동하는지 아셔야 합니다.

<br>

##### You have to configure your operating system with the UFW (or firewalld for Rocky) firewall and thus leave only port 4242 open.
여러분은 UFW(Rocky인 경우 firewalld) 방화벽을 여러분의 운영체제에 구성해놓으셔야 하고, 그에 따라 4242 포트만 열어놓으셔야 합니다.

<br>

> ##### ℹ️Your firewall must be active when you launch your virtual machine. For Rocky, you have to use firewalld instead of UFW.
여러분이 가상 머신을 켰을 때, 방화벽이 작동하고 있어야 합니다. Rocky의 경우에는, UFW 대신 firewalld가 작동하고 있어야 합니다.

<br>

- ##### The hostname of your virtual machine must be your login ending with 42 (e.g. wil42). You will have to modify this hostname during your evaluation.
- 여러분의 가상 머신의 hostname은 여러분의 42로 끝나는 여러분의 아이디여야 합니다(예시 : wil42). 평가 중에 여러분은 hostname을 수정하셔야 할 겁니다.
- ##### You have to implement a strong password policy.
- 여러분은 강력한 패스워드 정책을 구현하셔야 합니다.
- ##### You have to install and configure sudo following strict rules.
- 여러분은 엄격한 규칙에 따라서 sudo를 설치하고, 구성하셔야 합니다. 
- ##### In addition to the root user, a user with your login as username has to be present.
- root 유저에 더해서, 여러분의 아이디에 따른 유저도 존재해야 합니다.
- ##### This user has to belong to the user42 and sudo groups.
- 이 유저는 user42와 sudo 그룹에 속해있어야 합니다.

<br>

> ##### ℹ️During the defense, you will have to create a new user and assign it to a group.
평가 중, 여러분은 새 유저를 생성하고, 그룹에 가입시켜야 합니다.

<br>

##### To set up a strong password policy, you have to comply with the following requirements:
강력한 패스워드 규정을 구성하는 데에 있어서, 여러분은 다음과 같은 요구사항들을 적용해야 합니다:
- ##### Your password has to expire every 30 days.
- 패스워드는 매 30일마다 만료되어야 한다.
- ##### The minimum number of days allowed before the modification of a password will be set to 2.
- 패스워드 변경 후에 수정이 가능한 최소 경과일 수는 2일이어야 한다.
- ##### The user has to receive a warning message 7 days before their password expires.
- 유저는 패스워드 만료 7일 전에 경고 메시지를 받아야 한다.
- ##### Your password must be at least 10 characters long. It must contain an uppercase letter, a lowercase letter, and a number. Also, it must not contain more than 3 consecutive identical characters.
- 패스워드는 대문자, 소문자, 숫자를 포함한 최소 10글자 이상이어야 한다. 또, 반복되는 글자가 3글자 이상인 경우는 포함되지 않아야 한다.
- ##### The password must not include the name of the user.
- 패스워드는 유저의 이름을 포함하지 않아야 한다.
- ##### The following rule does not apply to the root password: The password must have at least 7 characters that are not part of the former password.
- 다음 규칙은 root 패스워드에 적용되지 않습니다 : 현재 패스워드는 최소 7글자 이상이 이전 패스워드와 달라야 한다.
- ##### Of course, your root password has to comply with this policy.
- 당연히, root 패스워드에도 이 규정은 적용되어야 합니다.

<br>

> ##### ⚠️After setting up your configuration files, you will have to change all the passwords of the accounts present on the virtual machine, including the root account.
> ⚠️패스워드 구성 파일들을 설정한 후에, 여러분은 root 계정을 포함한 가상 머신에 있는 모든 비밀번호를 바꾸셔야 할 겁니다.

<br>


##### To set up a strong configuration for your sudo group, you have to comply with the following requirements:
여러분의 sudo 그룹의 강력한 규정을 구성하기 위해서, 다음의 요구사항들을 적용해야 합니다:

- ##### Authentication using sudo has to be limited to 3 attempts in the event of an incorrect password.
- sudo를 사용하기 위한 인증에서, 잘못된 비밀번호 입력의 경우 3번의 시도로 제한되어야 한다.  
- ##### A custom message of your choice has to be displayed if an error due to a wrong password occurs when using sudo.
- sudo 사용 중, 잘못된 패스워드로 인한 에러가 발생했을 때에 여러분이 설정한 메시지가 출력되어야 한다.
- ##### Each action using sudo has to be archived, both inputs and outputs. The log file has to be saved in the /var/log/sudo/ folder.
- sudo를 통한 모든 동작(입출력)은 저장되어야 합니다. log 파일들은 /var/log/sudo 폴더에 저장되어야 한다.
- ##### The TTY mode has to be enabled for security reasons.
- 보안적인 이유로 인해, TTY 모드는 적용되어 있어야 한다.
- ##### For security reasons too, the paths that can be used by sudo must be restricted.
- 같은 이유로, sudo를 사용할 수 있는 경로는 제한되어있어야 한다.
- ##### Example:
- 경로 예시:
##### /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin

<br>

##### Finally, you have to create a simple script called monitoring.sh. It must be developed in bash.
최종적으로, 여러분은 monitoring.sh라고 하는 간단한 스크립트를 작성해야 합니다. 스크립트는 bash로 작성되어야 합니다.

##### At server startup, the script will display some information (listed below) on all terminals every 10 minutes (take a look at wall). The banner is optional. No error must be visible.
서버를 시작할 때, 스크립트는 아래에 나열된 정보들을 모든 터미널에 매 10분마다 표시해야 합니다(wall을 잘 살펴보세요). 배너는 선택사항입니다. 에러는 표시되지 않아야 합니다.


##### Your script must always be able to display the following information:
여러분의 스크립트는 다음의 정보들을 항상 표시할 수 있어야 합니다.
- The architecture of your operating system and its kernel version.
- 운영체제와 커널의 버전에 대한 구조
- The number of physical processors
- 물리 프로세서들의 수
- The number of virtual processors.
- 가상 프로세서들의 수
- The current available RAM on your server and its utilization rate as a percentage.
- 현재 서버에서 사용가능한 RAM과 백분율로 표현된 사용률.
- The current available memory on your server and its utilization rate as a percentage.
- 현재 서버에서 사용가능한 memory와 백분율로 표현된 사용률.
- The current utilization rate of your processors as a percentage.
- 백분율로 표현된 프로세서들의 현재 사용률.
- The date and time of the last reboot.
- 마지막으로 재시작된 날짜와 시간.
- Whether LVM is active or not.
- LVM의 활성화 여부.
- The number of active connections.
- 활성화된 연결들의 개수.
- The number of users using the server.
- 서버를 사용하고 있는 유저의 수.
- The IPv4 address of your server and its MAC (Media Access Control) address.
- 서버의 IPv4 주소와 MAC 주소.
- The number of commands executed with the sudo program
- sudo 프로그램으로 실행된 명령의 수.

> ℹ️During the defense, you will be asked to explain how this script works. You will also have to interrupt it without modifying it. Take a look at cron.

> ℹ️평가 중, 여러분은 스크립트가 어떻게 동작하는지 질문받게 될 겁니다. 또, 스크립트를 수정하지 않고 그 동작을 중지시켜야 합니다. cron을 잘 살펴보세요.

##### This is an example of how the script is expected to work:
다음은 스크립트의 작동 예시입니다:

##### Below are two commands you can use to check some of the subject’s requirements:
아래 두개는 과제의 요구사항을 체크할 수 있는 명령어입니다.
##### For Rocky: (사진)
##### For Debian: (사진)

# **Chapter V**
## Bonus part

##### Bonus list:
- Set up partitions correctly so you get a structure similar to the one below:
- 아래의 구조처럼 파티션을 올바르게 구성하세요: (사진)
- Set up a functional WordPress website with the following services: lighttpd, MariaDB, and PHP.
- lighttpd, MariaDB, PHP를 이용해서 WordPress로 기능을 갖춘 웹사이트를 구성하세요. 
- Set up a service of your choice that you think is useful (NGINX / Apache2 excluded!). During the defense, you will have to justify your choice
- 여러분이 생각하기에 유용한 서비스를 구성하세요(NGINX / Apache2는 제외!). 평가 중에, 여러분의 선택을 정당화해야합니다.

> ℹ️To complete the bonus part, you have the possibility to set up extra services. In this case, you may open more ports to suit your needs. Of course, the UFW/Firewalld rules has to be adapted accordingly.

> 보너스 파트를 마치기 위해서, 여러분은 추가적인 서비스들을 설치할 가능성이 있습니다. 이 경우에는, 필요에 따른 포트들만 더 열 수 있습니다. 당연히, UFW/Firewalld 규칙은 그에 맞춰 적용되어 있어야 합니다.

> ⚠️The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.

> ⚠️보너스 파트는 기본적으로 요구된 파트가 ___완벽한___ 경우에만 평가됩니다. 완벽의 의미는 종합적으로 처음부터 끝까지 오류 없이 잘 작동하는 상태를 의미합니다. 만약 기본 요구사항을 모두 충족하지 못했다면, 보너스 파트는 평가되지 않습니다.


# **Chapter VI**
## Submission and peer-evaluation

##### You only have to turn in a signature.txt file at the root of your Git repository. You must paste in it the signature of your machine’s virtual disk. To get this signature, you first have to open the default installation folder (it is the folder where your VMs are saved):
여러분은 Git repository의 root에 signature.txt 파일만 제출하여야 합니다.  signature.txt에는 가상 머신의 디스크 이미지 파일의 signature를 붙여 넣어야 합니다. 이 signature를 만들려면, 먼저, 기본 설치 폴더를 여셔야 합니다(VM이 저장되어 있는 폴더).

- Windows: %HOMEDRIVE%%HOMEPATH%\VirtualBox VMs\ 
- Linux: ~/VirtualBox VMs/
- MacM1: ~/Library/Containers/com.utmapp.UTM/Data/Documents/
- MacOS: ~/VirtualBox VMs/

##### Then, retrieve the signature from the ".vdi" file (or ".qcow2 for UTM’users) of your virtual machine in sha1 format. Below are 4 command examples for a rocky_serv.vdi file:
그리고 나서, 가상 머신의 ".vdi" 파일(또는 UTM users의 경우 ".qcow2")에서 signature를 sha1 형식으로 검색합니다.
- Windows: certUtil -hashfile rocky_serv.vdi sha1
- Linux: sha1sum rocky_serv.vdi
- For Mac M1: shasum rocky.utm/Images/disk-0.qcow2
- MacOS: shasum rocky_serv.vdi


##### This is an example of what kind of output you will get:
다음은 여러분이 받을 출력의 예시입니다:
- 6e657c4619944be17df3c31faa030c25e43e40af

> ℹ️Please note that your virtual machine’s signature may be altered after your first evaluation. To solve this problem, you can duplicate your virtual machine or use save state.

> ℹ️첫 평가 후에 여러분의 가상 머신의 signature가 바뀐다는 점을 알고 계시기 바랍니다. 이 문제를 해결하기 위해서, 가상 머신을 복제하거나 상태 저장을 사용하실 수 있습니다.


> ⚠️It is of course FORBIDDEN to turn in your virtual machine in your Git repository. During the defense, the signature of the signature.txt file will be compared with the one of your virtual machine. If the two of them are not identical, your grade will be 0.

> ⚠️당연히 Git repository에 가상 머신을 제출하는 것은 ___금지___ 됩니다. 평가를 진행하면서, siganture.txt 파일에 있는 서명은 가상 머신의 서명과 비교될 것입니다. 만약 이 두 개가 동일하지 않다면, 0점을 받게 될 것입니다.






