#ifndef PATROLOFFICER_H
#define PATROLOFFICER_H

#include <string>

// PatrolOfficer class declaration
class PatrolOfficer {
private:
    std::string name;       // Officer's name
    int badgeNumber;        // Officer's badge number

public:
    // Constructor that initializes a patrol officer with a name and badge number
    PatrolOfficer(std::string officerName, int badge);

    // Destructor
    ~PatrolOfficer();

    // Accessor for officer's name
    std::string getName() const;

    // Accessor for officer's badge number
    int getBadgeNumber() const;

    // Update for officer's name
    void setName(const std::string& officerName);

    // Update for officer's badge number
    void setBadgeNumber(int badge);

    // Method to print officer details
    void print() const;
};

#endif 
