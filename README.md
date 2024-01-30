# ELECTRIFIER MAZE

![Game GIF](/pics/readme_gif.gif)

## Table of Contents
- [ELECTRIFIER MAZE](#electrifier-maze)
	- [Table of Contents](#table-of-contents)
	- [Introduction](#introduction)
	- [Prerequisites](#prerequisites)
	- [Installation](#installation)
	- [Game Controls](#game-controls)
	- [Tools Used](#tools-used)
	- [Contributors](#contributors)

## Introduction
Electrifier Maze is a straightforward game constructed using the Raycasting technique, serving as my portfolio project. I opted for this project due to my curiosity about exploring game development. The objective of the game is to navigate from one end of the map (where the player initially spawns amidst black walls) to the opposite end of the map (featuring white walls).

## Prerequisites
- Debian/Ubuntu or Fedora OS
- A Bash terminal
- A user with superuser privilege
- git - Follow the instructions [here](https://github.com/git-guides/install-git#install-git-on-linux) to install git on your machine.

This game is designed to be compiled and run exclusively on a Linux machine.

## Installation
In a Bash terminal, execute the commands following the `$` sign below.
- Clone the repository

	```bash
	user@user-pc:~/$ git clone https://https://github.com/0xElectrifier/alx-maze_project
	Cloning into 'alx-maze_project'...
	...
	```

- Install the SDL2 library on your respective machine

	```bash
	user@user-pc:~/$ ./install_sdl2.sh
	Reading package lists... Done
	Building dependency tree... Done
	Reading state information... Done
	...
	```

- Compile the game files

	```bash
	user@user-pc:~/$ cd alx-maze_project/
	user@user-pc:~/alx-maze_project/$ ./build.sh
	```

## Game Controls
Use these keys to navigate your way around the game.

| Keys				| Function		|
|  :-------			| :---------		|
| `w` or `up arrow`		| Move forward  	|
| `s` or `down arrow`		| Move backward 	|
| `a` or `left arrow`		| Turn left		|
| `d` or `right arrow`		| Turn right		|

## Tools Used
As part of the project requirements, the game was built using the SDL2 library and Raycasting Technique. Noteworthy tools include:

- **ChatGPT:** Developed by OpenAI, ChatGPT served as a language model for researching and gaining a better understanding of the Raycasting technique and SDL2 library. It also provided insights on implementing certain designs, such as the game map.

- **Raycasting:** A rendering technique that creates 3D perspective from a 2D map. The 2D map used in this game is stored in a [file](/map/map1.txt), with a function reading the file line by line and storing each character in a 2D array representing the length and breadth of the map. Further information about Raycasting can be found [here](https://permadi.com/1996/05/ray-casting-tutorial-table-of-contents/).

- **SDL2:** SDL (The Simple DirectMedia Layer) is a cross-platform development library designed for low-level access to audio, video, mouse, keyboard, and graphics hardware via OpenGL and Direct3D. SDL2, the second version of the SDL library, was used in this project. Learn more about SDL2 [here](https://lazyfoo.net/tutorials/SDL/index.php).

## Contributors
- [Haruna Bah Jibril](https://www.linkedin.com/in/harzjunior/)
