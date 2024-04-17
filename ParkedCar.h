#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

// The ParkedCar class holds information about a parked car.
class ParkedCar {
private:
    std::string make;         // The make of the car
    std::string model;        // The model of the car
    std::string color;        // The color of the car
    std::string licenseNumber; // The license number of the car

public:
    // Constructor
    ParkedCar(std::string mk, std::string mdl, std::string clr, std::string license);
    
    // Destructor
    ~ParkedCar(); 

    // Accessor methods
    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
    std::string getLicenseNumber() const;

    // Mutator methods
    void setMake(const std::string& mk);
    void setModel(const std::string& mdl);
    void setColor(const std::string& clr);
    void setLicenseNumber(const std::string& license);

    // Method to print car details
    void print() const;
};

#endif // PARKEDCAR_H
