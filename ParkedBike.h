#ifndef PARKEDBIKE_H
#define PARKEDBIKE_H

#include "ParkedCar.h"

class ParkedBike : public ParkedCar {
private:
    bool isTwoWheeled; // Flag indicating if it is a two-wheeled bike

public:
    // Constructors
    ParkedBike();
    ParkedBike(const std::string& make, const std::string& model, const std::string& color, const std::string& license, bool twoWheeled);

    // Accessor
    bool isTwoWheeledBike() const;

    // Mutator
    void setTwoWheeledBike(bool twoWheeled);

    // Other functionalities specific to bikes, if needed
};

#endif // PARKEDBIKE_H
