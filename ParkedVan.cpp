#include "ParkedVan.h"

// Constructors
ParkedVan::ParkedVan() : payloadCapacity(0) {}

ParkedVan::ParkedVan(const std::string& make, const std::string& model, const std::string& color, const std::string& license, int payload)
    : ParkedCar(make, model, color, license), payloadCapacity(payload) {}

// Accessor
int ParkedVan::getPayloadCapacity() const {
    return payloadCapacity;
}

// Mutator
void ParkedVan::setPayloadCapacity(int payload) {
    payloadCapacity = payload;
}