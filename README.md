<img align="right" style="width:428px" width="488px" src="https://github.com/user-attachments/assets/58bd40ba-26f0-4440-9455-20cc086c6b28" />

<div id="toc">
  <ul style="list-style: none">
    <summary>
      <h1> Flappy (Raylib + C) </h1>
    </summary>
  </ul>
</div>

**A simple reimplementation of *Flappy Bird* built using low-level C and the raylib library.**  

This project was created to understand **game development fundamentals from scratch**—without relying on heavy game engines.


---

<br/>

## About the Project

This project focuses on learning how games actually work under the hood:

* Game loop (**Init → Update → Draw**)
* Frame-independent movement using `delta time`
* Basic physics (gravity & jump mechanics)
* Dynamic obstacle generation (pipes)
* Modular code structure with headers and source files

The goal was not to build a polished game, but to **build a strong foundation in low-level game development**.

---

<details>
  <summary><b>Project Structure</b></summary>

```
.
├── build/              # Compiled executable
├── raylib/             # Raylib headers and libraries
├── src/
│   ├── main.c          # Entry point
│   ├── game.c          # Game loop logic
│   ├── player.c        # Player mechanics
│   ├── pipes.c         # Pipe system
│   ├── ground.c        # Ground rendering
│   └── include/        # Header files
├── Makefile
└── README.md
```

---

</details>

## Controls

* **SPACE** → Jump


## ⚠️ Notes

* This project is intentionally simple and not optimized for production
* Built purely for learning and experimentation

