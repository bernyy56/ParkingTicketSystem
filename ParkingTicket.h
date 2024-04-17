#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PatrolOfficer.h"

// ParkingTicket class declaration
class ParkingTicket {
private:
    const int baseFine; // The base fine for a parking violation
    const int hourlyFine; // The additional fine for each hour 

public:
    ParkingTicket(); // Constructor
    ~ParkingTicket(); // Destructor

    // Method to calculate the fine based on the number of minutes over
    int calculateFine(int minutesOver) const;

    // Method to issue a ticket if applicable
    void issueTicket(const ParkedCar& car, const ParkingMeter& meter, 
                     const PatrolOfficer& officer, int minutesParked) const;
};

#endif 