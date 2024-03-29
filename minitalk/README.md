<div align=center >
<h1>💬 minitalk</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/libft"><img src="https://github.com/h-beeen/42cursus/assets/112257466/032543c2-3420-43f1-b4c7-4bc4aa661a18"/></a>
</div>
<br/>


<p align="center">
	<b><i>42Cursus 6th Project<br/>
  	A small data exchange program Using UNIX Signals</i></br></br>
</p>
	<h3 align="center">
	<a href="https://github.com/h-beeen/42cursus/tree/master/minitalk#-about-the-project">About</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/minitalk#%EF%B8%8F-usage">Usage</a>
	</h3>
	<p align="center">
	<img alt="Github repo file count" src="https://img.shields.io/github/directory-file-count/h-beeen/42Cursus/minitalk/minitalk?logo=c&style=for-the-badge" /> <img src="https://img.shields.io/badge/100/100-007396?style=for-the-badge&logo=42&label=Score&logoColor=white&color=darkgreen"> <img src="https://img.shields.io/badge/2023&brvbar;05&brvbar;09-007396?style=for-the-badge&logo=Starship&label=completed&logoColor=white&color=black">
	</p>

---

## 💡 About the project

> _The purpose of this project is to code a small data exchange program using
UNIX signals._


- For more detailed information, look at the [**subject of this project**](/minitalk/minitalk/README.md/).

---

## 🛠️ Usage

### Requirements

- The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**① Compiling**

- To compile, go to the project path and run:

```shell
$ make
```


## 📋 Testing

- To test the program you just need to launch the "server" and the "client" in different shell tabs with the following:

```shell
$ ./server
```

- This will show your PID to make the client work and will stay waiting to receive a message from the "client"

```shell
$ ./client "PID" "Your message string"
```

- By launching it, this will show "Your message string" on the server window.
