#include "ParkingSystem.h"
#include <iostream>

using namespace std;

// Constructor
ParkingSystem::ParkingSystem() {}

// Park a car
void ParkingSystem::insertCar(int row, int col) {
    if (isSpotEmpty(row, col)) {
        parkingLot[row][col] = 1;
        cout << "Spot reserved!\n";
    } else {
        cout << "This spot is taken!\nPlease choose another spot!\n";
    }
}

// Free a parking spot
void ParkingSystem::freeCar(int row, int col) {
    if (!isSpotEmpty(row, col)) {
        parkingLot[row][col] = 0;
        cout << "This car is freed!\n";
    } else {
        cout << "This spot is empty!\n";
    }
}

// Display parking lot
void ParkingSystem::traverse() const {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << (parkingLot[i][j] == 0 ? "[_]" : "[1]");
        }
        cout << "\n";
    }
}

// Check if spot is empty
bool ParkingSystem::isSpotEmpty(int row, int col) const {
    return parkingLot[row][col] == 0;
}

// Destructor
ParkingSystem::~ParkingSystem() {}
