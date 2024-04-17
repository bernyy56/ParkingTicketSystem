#include "ParkingMeter.h"
#include <iostream>

// Constructor for ParkingMeter class that initializes purchasedTime to the value passed.
ParkingMeter::ParkingMeter(int minutes) : purchasedTime(minutes) {}


ParkingMeter::~ParkingMeter() {
    
}

// getPurchasedTime function returns the time purchased at the meter.
int ParkingMeter::getPurchasedTime() const {
    return purchasedTime;
}

void ParkingMeter::setPurchasedTime(int minutes) {
    if (minutes < 0) {
        std::cerr << "Invalid value. Purchased time cannot be negative." << std::endl;
    } else {
        purchasedTime = minutes;
    }
}

// print function outputs the details of the parking meter.
void ParkingMeter::print() const {
    std::cout << "Parking Meter Information: " << std::endl;
    std::cout << "Purchased Time: " << purchasedTime << " minutes" << std::endl;
}

