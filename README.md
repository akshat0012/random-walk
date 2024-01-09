# Random Walk Visualizer using SFML

This program demonstrates a visual representation of a random walk using the SFML library in C++. The particle moves randomly in different directions and creates line wherever it goes within a window, showcasing a typical random walk pattern.

## About Random Walk

Random walk is a mathematical concept that describes a path consisting of a sequence of steps taken randomly. Each step is determined by a random process, and the path formed by the cumulative steps can exhibit interesting properties and behaviors. [Learn more about Random Walk on Wikipedia](https://en.wikipedia.org/wiki/Random_walk)

## About SFML

SFML (Simple and Fast Multimedia Library) is a cross-platform library for developing multimedia applications and games in C++. It provides a simple interface to various components of multimedia, including graphics, windowing, audio, and networking. [Visit the SFML official website](https://www.sfml-dev.org/) for more information.

## Program Description

The Random Walk Visualizer program uses SFML to create a window where a particle moves randomly in different directions, illustrating the concept of a random walk. The movement is generated using random numbers, and the particle's position is updated accordingly.

## How to Use

To run this program, make sure you have SFML properly installed and configured in your development environment. You can compile the source code provided in your preferred C++ compiler with the SFML library linked.

1. Clone this repository: git clone https://github.com/your-username/random-walk-visualizer.git

2. Compile the code using your C++ compiler. Make sure to link the SFML libraries.

   `cd random-walk`

   `g++ -o executable random_walk.cpp -lsfml-system -lsfml-window -lsfml-graphics`

3. Run the compiled executable to launch the Random Walk Visualizer.
   `./a`

## Dependencies

- SFML library (version 2.6.1)
- C++ compiler (supporting C++11 or later)

## Acknowledgments

- [SFMLs](https://www.sfml-dev.org/)
- [Wikipedia - Random Walk](https://en.wikipedia.org/wiki/Random_walk)
