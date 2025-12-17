# Data Structures Demonstrator

This C++ project is a comprehensive demonstration of various fundamental data structures, designed as a final project for a data structures course. It provides an interactive menu-driven interface where users can explore and manipulate different data structures in real-time.

## Overview

The program implements and demonstrates the following data structures:

1. **Doubly Linked List** - Music Playlist Management
2. **Stack** - Cafeteria Plate Management
3. **Queue** - School Cashier Line Management
4. **Max Heap** - Trending Food Popularity Tracker
5. **2D Array** - Parking System Management
6. **Tree** - Product Category Hierarchy

Each data structure is implemented with its own header (.h) and implementation (.cpp) files, showcasing proper encapsulation and modular design.

## Features

### Music Playlist (Doubly Linked List)
- Add songs to the playlist
- Play current, next, or previous songs
- Search for specific songs
- Remove songs from the playlist
- Display the entire playlist

### Cafeteria Plate Stack
- Add plates to the stack (LIFO)
- Take plates from the stack
- Display current stack contents

### School Cashier Queue
- Add students to the queue (FIFO)
- Serve students from the queue
- Display the current line

### Trending Food Tracker (Max Heap)
- Add new food items with popularity scores
- View the top trending food
- Display all trending foods

### Parking System (2D Array)
- Park cars in a 5x5 grid
- Free parking spots
- Display the parking lot layout

### Product Category Tree
- Add categories to the hierarchy
- Display all categories
- Search for specific categories
- Remove categories from the tree

## Requirements

- C++17 compatible compiler (g++ recommended)
- Linux/Unix environment (developed in Dev Container)
- Make build system

## Setup Instructions

### For Linux (Ubuntu/Debian)
```bash
sudo apt update
sudo apt install g++ make
```

### For macOS
```bash
# Install Homebrew if not already installed
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install g++ and make
brew install gcc make
```

### For Windows
#### Option 1: Windows Subsystem for Linux (WSL)
1. Enable WSL in Windows Features
2. Install Ubuntu from Microsoft Store
3. Open Ubuntu terminal and run:
```bash
sudo apt update
sudo apt install g++ make
```

#### Option 2: MinGW
1. Download and install MinGW from https://www.mingw-w64.org/
2. Add MinGW/bin to your PATH
3. Install make separately or use the included version

### For VS Code Users (Recommended)
This project is developed using VS Code with Dev Containers for a consistent development environment. Dev Containers use Docker to provide isolated, reproducible development environments.

#### Prerequisites:
1. Install Docker Desktop for your platform:
   - **Windows/macOS**: Download from https://www.docker.com/products/docker-desktop
   - **Linux**: 
     ```bash
     sudo apt update
     sudo apt install docker.io
     sudo systemctl start docker
     sudo systemctl enable docker
     sudo usermod -aG docker $USER
     ```
     (Log out and back in for group changes to take effect)

2. Install VS Code
3. Install the "Dev Containers" extension from the VS Code marketplace

#### Setup:
1. Clone the repository
2. Open the project in VS Code
3. When prompted, click "Reopen in Container" (or use Command Palette: "Dev Containers: Reopen in Container")
4. The container includes all necessary dependencies (g++, make, etc.) pre-installed

Dev Containers ensure everyone gets the same development environment, eliminating "works on my machine" issues.

## Building the Project

1. Ensure you have g++ installed:
   ```bash
   sudo apt update
   sudo apt install g++
   ```

2. Clone or navigate to the project directory

3. Build the project:
   ```bash
   make
   ```

4. Run the program:
   ```bash
   make run
   ```
   or
   ```bash
   ./app
   ```

## Usage

Upon running the program, you'll see a main menu:

```
What data structure would you like to present?
1. Doubly Linked List
2. Stack
3. Queue
4. Max Heap
5. 2D Array
6. Category Tree
0. Exit
Enter choice (1-6):
```

Select a number corresponding to the data structure you want to explore. Each data structure has its own submenu with operations specific to that structure.

## Project Structure

```
/
├── main.cpp                    # Main program with menu system
├── Makefile                    # Build configuration
├── README.md                   # This file
└── dataStructureCodes/
    ├── DoublyLinkedList.h/.cpp # Music playlist implementation
    ├── PlateStack.h/.cpp       # Stack implementation
    ├── StudentQueue.h/.cpp     # Queue implementation
    ├── TrendingFood.h/.cpp     # Max heap implementation
    ├── ParkingSystem.h/.cpp    # 2D array implementation
    └── CategoryTree.h/.cpp     # Tree implementation
```

## Implementation Details

- **Language**: C++17
- **Paradigm**: Object-Oriented Programming
- **Memory Management**: Manual memory management where appropriate
- **Error Handling**: Basic input validation
- **I/O**: Console-based interface using std::cin and std::cout

## Learning Objectives

This project demonstrates:
- Implementation of fundamental data structures
- Proper use of classes and encapsulation
- Memory management in C++
- Interactive program design
- Modular code organization
- Build system usage (Make)

## Contributing

This is a educational project for demonstrating data structures concepts. For improvements or bug fixes, please create an issue or submit a pull request.

## License

This project is for educational purposes only.