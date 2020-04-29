# SSGF [Super Small Game Framework]
SSGF is a 2D game framework written in C/C++ that is based off [SFML](https://www.sfml-dev.org/). The goal of this project is to create a small game framework that is stable and extensible.

# Development Goals
* Effective use of threads
* Efficient use of assets
* Rectangle and Circle Collision recognition 
* Game State/Sub-State management via Finite State Machine
* Sprite Rendering and Animation

# Disclaimer
I have never developed a full game before, I've only messed around with SFML a few times and created some simple games like Pong and Dodger. **There will be bugs, inefficiencies, and general weirdness to this code base in the initial stages while I learn how all this stuff works.**

Resources that I utilize will be referenced below.

# Resources
[Game Design Patterns](http://gameprogrammingpatterns.com/contents.html)
[Practical Makefiles](http://nuclear.mutantstargoat.com/articles/make/)
[SFML-Game-Framework by Hopson97](https://github.com/Hopson97/SFML-Game-Framework)
[SFML Webstie](https://www.sfml-dev.org/learn.php)
[Tutorial: Basic Game Engine](https://github.com/SFML/SFML/wiki/Tutorial%3A-Basic-Game-Engine)
[Vigilante-Game-Framework](https://github.com/gamepopper/Vigilante-Game-Framework)


# TODO
- [ ] Animation Tool
- [X] Asset Manager
- [ ] Efficient memory allocators (override new and delete)
- [ ] FPS Indicator
- [X] FPS Tracker
- [X] Game Main Loop
- [X] Game State System
- [X] GUI generator
	- [X] Button
	- [X] Widget
	- [X] Button Stacker
- [X] State manager (push/pop states on request)
- [ ] Template singleton for manager declarations
