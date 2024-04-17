#include "ParkingTicket.h"
#include <iostream>
#include <cmath> 

// Constructor 
ParkingTicket::ParkingTicket() : baseFine(25), hourlyFine(10) {}

// Destructor 

// Method to calculate the total fine
int ParkingTicket::calculateFine(int minutesOver) const {
    // Calculate how many full or partial hours are over
    int hoursOver = static_cast<int>(std::ceil(minutesOver / 60.0));
    
    return baseFine + (hourlyFine * hoursOver);
}

// Method to issue a parking ticket
void ParkingTicket::issueTicket(const ParkedCar& car, const ParkingMeter& meter,
                                const PatrolOfficer& officer, int minutesParked) const {
    // Calculate minutes over the purchased time
    int minutesOver = minutesParked - meter.getPurchasedTime();

    // If the car has overstayed the purchased time, issue a ticket
    if (minutesOver > 0) {
        std::cout << "TICKET ISSUED!\n";
        std::cout << "---------------------------------\n";
        officer.print(); // Print officer details
        car.print(); // Print car details
        meter.print(); // Print meter details
        std::cout << "Minutes in Violation: " << minutesOver << "\n";
        std::cout << "Fine: £" << calculateFine(minutesOver) << "\n";
        std::cout << "---------------------------------\n";
    } else {
        std::cout << "No penalty is incurred.\n";
    }
}
