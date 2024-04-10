#include <string>
#include <iostream>

class ParkedCar {
    private:
    std::string make;
    std::string model;
    std::string color;
    std::string licenseNumber;

    public:
    ParkedCar(std::string mk, std::string mdl, std::string clr, std::string lic)
    : make(mk), model(mdl), color(clr), licenseNumber(lic) {}

    // Getters
    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    std::string getColor() const { return color; }
    std::string getLicenseNumber() const { return licenseNumber; }

    // Setters
    void setMake(const std::string& mk) { make = mk; }
    void setModel(const std::string& mdl) { model = mdl; }
    void setColor(const std::string& clr) { color = clr; }
    void setLicenseNumber(const std::string& lic) { licenseNumber = lic; }

    void print() const {
        std::cout << "Car Information:\n"
                  << "Make: " << make << "\n"
                  << "Model: " << model << "\n"
                  << "Color: " << color << "\n"
                  << "License Number: " << licenseNumber << "\n";
    }
};
