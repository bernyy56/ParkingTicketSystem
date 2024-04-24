#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PatrolOfficer.h"
#include "ParkingTicket.h"
#include "ParkedBike.h" 
#include "ParkedVan.h"  
#include <iostream>
#include <limits> 

// Function to validate string input
bool isValidString(const std::string& input) {
    return !input.empty();
}

// Function to validate integer input
bool isValidInteger(int input) {
    return std::cin.good();
}

int main() {
    // Greet the officer and get their details.
    std::string officerName;
    int badgeNumber;

    // Handling officer's name input with validation.
    do {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, officerName);
    } while (!isValidString(officerName));

    // Handling badge number input with validation.
    do {
        std::cout << "Please enter your badge number: ";
        if (!(std::cin >> badgeNumber)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!isValidInteger(badgeNumber) || badgeNumber <= 0);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

    //  PatrolOfficer with the entered details.
    PatrolOfficer officer(officerName, badgeNumber);
    std::cout << "Hello officer " << officer.getName() << "!\n";
    std::cout << "The system is ready to use!\n\n";

    // Main loop for inspections.
    char continueInspection = 'y';
    do {
        std::string make, model, color, licenseNumber;
        int purchasedTime, parkedTime;

        // Handling car details input (without validation for simplicity).
        std::cout << "Please enter the car information (separated by space): [Make] [Model] [Color] [License]: ";
        std::cin >> make >> model >> color >> licenseNumber;

        // Handling purchased time input (without validation for simplicity).
        std::cout << "What is the purchased parking time (in minutes)? ";
        std::cin >> purchasedTime;

        // Handling parked time input (without validation for simplicity).
        std::cout << "How long has this car parked for (in minutes)? ";
        std::cin >> parkedTime;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

        //  ParkedCar and ParkingMeter with the entered details.
        ParkedCar car(make, model, color, licenseNumber);
        ParkingMeter meter(purchasedTime);

        //  ParkingTicket and issue a ticket if necessary.
        ParkingTicket ticket;
        ticket.issueTicket(car, meter, officer, parkedTime);

        // Prompt for the next inspection.
        std::cout << "\nNext inspection? (Y/N): ";
        std::cin >> continueInspection;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
        std::cout << "\n";

    } while (std::tolower(continueInspection) == 'y');

    std::cout << "Thank you for using the Parking Ticket Simulator. Goodbye!\n";
    return 0;
}








