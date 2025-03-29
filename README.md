# Maze Distance Calculator

This C program calculates the distances between points in a maze and determines the maximum and minimum distances.

## Description

The program prompts the user to input the size of a maze (number of lines and columns), the number of points within the maze, and the coordinates of each point. It then calculates the distance between the user's own location and each of the other points using either Euclidean or Manhattan distance, based on the user's choice. Finally, it outputs the maximum and minimum distances found.

## How to Compile and Run

1.  **Save the code:** Save the C code as a `.c` file (e.g., `maze_distance.c`).
2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code. Make sure you have GCC (or another C compiler) installed.
    ```bash
    gcc maze_distance.c -o maze_distance -lm
    ```
    * The `-lm` flag links the math library, which is necessary for the `sqrt` and `pow` functions.
3.  **Run:** Execute the compiled program.
    ```bash
    ./maze_distance
    ```
    (or `maze_distance.exe` on Windows)

## Input

The program expects the following inputs from the user:

* **Maze Size:**
    * Number of lines in the maze.
    * Number of columns in the maze.
    * Number of points in the maze.
* **User's Coordinates:**
    * Line coordinate of the user's location.
    * Column coordinate of the user's location.
* **Coordinates of Other Points:**
    * For each point, the program prompts for the line and column coordinates.
* **Distance Calculation Method:**
    * For each point, the program asks the user to choose between Euclidean (1) and Manhattan (2) distance calculation.

## Output

The program outputs:

* The user's location.
* The location of each other point.
* The distance between the user's location and each other point.
* The maximum distance found.
* The minimum distance found.
* Error messages if invalid input is provided.

## Error Handling

* The program checks if the input coordinates are within the maze boundaries.
* The program checks for valid distance calculation method inputs.
* If invalid input is detected, the program will inform the user and terminate or re-prompt for correct input.

## Example
