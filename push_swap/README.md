<div align=center >
<h1>🏙️ push_swap</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/push_swap"><img src="https://user-images.githubusercontent.com/112257466/214543615-812bc032-e1f8-41d5-b4de-c82316447778.png"/></a>
</div>
<br/>


<p align="center">
	<b><i>42Cursus 7th Project<br/>
  	My Very First Own Library</i></br></br>
</p>
	<h3 align="center">
	<a href="https://github.com/h-beeen/42cursus/tree/master/push_swap#-about-the-project">About</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/push_swap#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/push_swap#-push_swap-rules">Rules</a>
	</h3>
	<p align="center">
	<img alt="Github repo file count" src="https://img.shields.io/github/directory-file-count/h-beeen/42Cursus/push_swap/push_swap?logo=c&style=for-the-badge" /> <img src="https://img.shields.io/badge/120/100-007396?style=for-the-badge&logo=42&label=Score&logoColor=white&color=darkgreen"> <img src="https://img.shields.io/badge/2022&brvbar;11&brvbar;24-007396?style=for-the-badge&logo=Starship&label=completed&logoColor=white&color=black">
	</p>

---

## 💡 About the project
	push_swap is a 42 school algorithm project where 
	we must sort a given list of random numbers with a limited set of instructions,
	using the lowest possible number of actions.


<br/>

---

## 🛠️ Usage

Git clone the repository and cd into it. Then use ```make``` to compile.

Then run it with :

```shell
./push_swap <numbers>
```

The numbers provided can be positive or negative integers. There must not be any duplicates. For example :

```shell
./push_swap 9 0 -217 2147483647 -2147483648
```

If the arguments are valid, the program will output the most efficient list of actions to sort the list.

The program can be checked with the provided checker, like this :

```shell
ARG="3 0 9 2 -1"; ./push_swap $ARG | ./checker $ARG
```

You can also simply ```make test3```, ```make test5```, ```make test100``` or ```make test500``` to quickly test the program with that number of values to sort.

<br/>

---

## 📖 Push_Swap Rules

The program is only allowed two stacks to work with, </br>
stack A and stack B. All the numbers are initially added to stack A, and B is empty.

The possible actions are:

* ```pa``` (push A): Take the first element at the top of B and put it at the top of A. Do nothing if B is empty.
* ```pb``` (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
* ```sa``` (swap A): Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements.
* ```sb``` (swap B): Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements.
* ```ss```: ```sa``` and ```sb``` at the same time.
* ```ra``` (rotate A): Shift all elements of stack A up by 1. The first element becomes the last one.
* ```rb``` (rotate B): Shift all elements of stack B up by 1. The first element becomes the last one.
* ```rr```: ```ra``` and ```rb``` at the same time.
* ```rra``` (reverse rotate A): Shift all elements of stack A down by 1. The last element becomes the first one.
* ```rrb``` (reverse rotate B): Shift all elements of stack b down by 1. The last element becomes the first one.
* ```rrr``` : ```rra``` and ```rrb``` at the same time.

The grade depends on how efficient the program's sorting process is.
 
* Sorting 3 values: no more than 3 actions.
* Sorting 5 values: no more than 12 actions.
* Sorting 100 values: rating from 1 to 5 points depending on the number of actions:
  * 5 points for less than 700 actions
  * 4 points for less than 900
  * 3 points for less than 1100
  * 2 points for less than 1300
  * 1 point for less than 1500
* Sorting 500 values: rating from 1 to 5 points depending on the number of actions:
  * 5 points for less than 5500 actions
  * 4 points for less than 7000
  * 3 points for less than 8500
  * 2 points for less than 10000
  * 1 point for less than 11500