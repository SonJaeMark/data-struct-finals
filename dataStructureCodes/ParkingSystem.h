#ifndef PARKING_SYSTEM_H
#define PARKING_SYSTEM_H

/**
 * @class ParkingSystem
 * @brief Simulates a 5x5 parking lot with simple park/free functionality
 */
class ParkingSystem {
private:
    int parkingLot[5][5] = {0};

public:
    ParkingSystem();

    void insertCar(int row, int col);
    void freeCar(int row, int col);
    void traverse() const;
    bool isSpotEmpty(int row, int col) const;

    ~ParkingSystem();
};

#endif
