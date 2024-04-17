#include "ParkedBike.h"

// Constructors
ParkedBike::ParkedBike() : isTwoWheeled(false) {}
ParkedBike::ParkedBike(const std::string& make, const std::string& model, const std::string& color, const std::string& license, bool twoWheeled)
    : ParkedCar(make, model, color, license), isTwoWheeled(twoWheeled) {}

// Accessor
bool ParkedBike::isTwoWheeledBike() const {
    return isTwoWheeled;
}

// Mutator
void ParkedBike::setTwoWheeledBike(bool twoWheeled) {
    isTwoWheeled = twoWheeled;
}

