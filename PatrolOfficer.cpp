#include "PatrolOfficer.h"
#include <iostream>

// Constructor implementation
PatrolOfficer::PatrolOfficer(std::string officerName, int badge)
    : name(officerName), badgeNumber(badge) {
   
}

// Destructor implementation
PatrolOfficer::~PatrolOfficer() {
   
}

// Accessor for officer's name
std::string PatrolOfficer::getName() const {
    return name;
}

// Accessor for officer's badge number
int PatrolOfficer::getBadgeNumber() const {
    return badgeNumber;
}

// Update for officer's name
void PatrolOfficer::setName(const std::string& officerName) {
    name = officerName;
}

// Update for officer's badge number
void PatrolOfficer::setBadgeNumber(int badge) {
    badgeNumber = badge;
}

// Method to print officer details
void PatrolOfficer::print() const {
    // Prints the details of the patrol officer in a readable format
    std::cout << "Police Officer Information:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Badge Number: " << badgeNumber << "\n";
}



