#include "ParkedCar.h"
#include <iostream>

// Constructor definition
ParkedCar::ParkedCar(std::string mk, std::string mdl, std::string clr, std::string license)
    : make(mk), model(mdl), color(clr), licenseNumber(license) {
    // The constructor initializes the car with the given details.
}

// Destructor definition
ParkedCar::~ParkedCar() {
}

// Accessor methods definition
std::string ParkedCar::getMake() const {
    return make;
}

std::string ParkedCar::getModel() const {
    return model;
}

std::string ParkedCar::getColor() const {
    return color;
}

std::string ParkedCar::getLicenseNumber() const {
    return licenseNumber;
}

// Mutator methods definition
void ParkedCar::setMake(const std::string& mk) {
    make = mk;
}

void ParkedCar::setModel(const std::string& mdl) {
    model = mdl;
}

void ParkedCar::setColor(const std::string& clr) {
    color = clr;
}

void ParkedCar::setLicenseNumber(const std::string& license) {
    licenseNumber = license;
}

// Method to print car details
void ParkedCar::print() const {
    // This method prints the details of the car in a user-friendly format.
    std::cout << "Car Details:" << std::endl;
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "License Number: " << licenseNumber << std::endl;
}


