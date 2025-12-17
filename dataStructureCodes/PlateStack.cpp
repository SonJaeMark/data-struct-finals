#include "PlateStack.h"
#include <iostream>

using namespace std;

void PlateStack::addPlate(int plateID) {
    plates.push(plateID);
    cout << "Plate added." << endl;
}

void PlateStack::takePlate() {
    if (plates.empty()) {
        cout << "No plates available." << endl;
    } else {
        cout << "Plate taken: " << plates.top() << endl;
        plates.pop();
    }
}

void PlateStack::showPlates() {
    if (plates.empty()) {
        cout << "No plates in stack." << endl;
        return;
    }

    stack<int> temp = plates;
    cout << "Plates (top to bottom): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
