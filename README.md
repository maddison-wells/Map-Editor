<h1>Map Editor</h1>

A side project to help with making and rendering maps into my C++ game, DDC.

<h2> 19th August </h2>

Set up my repo and main.cpp.

Main should include

- Initialise
- Load
- Update
- Draw

Initialise, we create the window and set a framerate limit.

Load, while window is open (game loop) we load any functions, variables and clasess.

Update, we update our event polling loop

Draw, draw clear and display.

To run application, we must create a `Makefile`, I just copied and pasted this, changing the app name and class to be loaded.

Step 1: Create a grid class.

The math is that we use a for loop for each axis to render out lines, but include a `+ 1` to close it off.

<img src="src/img/grid.png" width="200px">
