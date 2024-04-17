#ifndef PARKINGMETER_H
#define PARKINGMETER_H

// The ParkingMeter class represents a parking meter.

class ParkingMeter {
private:
    int purchasedTime;  // The amount of time purchased at the parking meter in minutes.

public:
    // Constructor that initializes the purchased time for the meter.
    explicit ParkingMeter(int minutes);

    // Destructor
    ~ParkingMeter();

    // Accessor for purchased time.
    int getPurchasedTime() const;

    // Mutator for purchased time.
    void setPurchasedTime(int minutes);

    // Print method to display the purchased time.
    void print() const;
};

#endif 
