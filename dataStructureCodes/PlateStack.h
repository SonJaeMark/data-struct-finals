#ifndef PLATE_STACK_H
#define PLATE_STACK_H

#include <stack>

/**
 * @class PlateStack
 * @brief Manages cafeteria plates using stack (LIFO)
 */
class PlateStack {
private:
    std::stack<int> plates;

public:
    void addPlate(int plateID);
    void takePlate();
    void showPlates();
};

#endif
