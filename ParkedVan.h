#ifndef PARKEDVAN_H
#define PARKEDVAN_H

#include "ParkedCar.h"

class ParkedVan : public ParkedCar {
private:
    int payloadCapacity; // Payload capacity in kilograms

public:
    // Constructors
    ParkedVan();
    ParkedVan(const std::string& make, const std::string& model, const std::string& color, const std::string& license, int payload);

    // Accessor
    int getPayloadCapacity() const;

    // Mutator
    void setPayloadCapacity(int payload);

};

#endif // PARKEDVAN_H
