<div align=center >
<h1>🎮 so_long</h1>
<a href="https://github.com/h-beeen/42cursus/tree/master/so_long"><img src="https://github.com/h-beeen/42cursus/assets/112257466/d66ae677-3a70-42ff-81b5-3a31e02af864"/></a>
</div>
<br/>

<p align="center">
	<b><i>42Cursus 5th Project<br/>
  	My Very Small 2D Game</i></br></br>
</p>
	<h3 align="center">
	<a href="https://github.com/h-beeen/42cursus/tree/master/so_long#-about-the-project">About</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/so_long#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="https://github.com/h-beeen/42cursus/tree/master/so_long#%EF%B8%8F-usage">How To Play</a>
	</h3>
	<p align="center">
	<img alt="Github repo file count" src="https://img.shields.io/github/directory-file-count/h-beeen/42Cursus/so_long/so_long?logo=c&style=for-the-badge" /> <img src="https://img.shields.io/badge/100/100-007396?style=for-the-badge&logo=42&label=Score&logoColor=white&color=darkgreen"> <img src="https://img.shields.io/badge/2023&brvbar;06&brvbar;17-007396?style=for-the-badge&logo=Starship&label=completed&logoColor=white&color=black">
	</p>

---

## 💡 About the project

	This project is a very small 2D game.
	It is built to make you work with textures, sprites.
	And some very basic gameplay elements.

![](https://github-production-user-asset-6210df.s3.amazonaws.com/112257466/244761187-95f1c4a1-e968-4952-b12c-222a738ba840.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIWNJYAX4CSVEH53A%2F20230618%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230618T090631Z&X-Amz-Expires=300&X-Amz-Signature=e72ae0623c199af502935cebcf281992bec4c6760ac1c2e7459ae8317a588605&X-Amz-SignedHeaders=host&actor_id=112257466&key_id=0&repo_id=593634376)	

## 🛠️ Usage

### Requirements

- The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

<br/>

### Instructions

- Compiling the library

- To compile the library, go to its path and run:

```bash
$ make

$ ./so_long [MAP_FILE.ber]
```
- Only map files with extension `.ber` are available.
- Map file examples are available in the `maps/` directory.

```bash
$ ./so_long maps/validMap1.ber
```
- Run the code to use all the features of the game.

---

### 🛠️ HOW TO PLAY
- The player’s goal is to collect all collectibles present <br/>
  on the map then escape with minimal movement.

|KEYBOARD|ACTION|
|---|---|
|`W`, `↑`|Move up|
|`S`, `↓`|Move down|
|`A`, `←`|Move left|
|`D`, `→`|Move right|
|`ESC ⎋`|Close the game window|