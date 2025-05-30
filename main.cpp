#include "Service.h"
#include "TherapeuticMassage.h"

#include <iostream>
#include <string>
#include <iomanip> // Include iomanip for std::setprecision

int main() {
    // Create an instance of TherapeuticMassage
    std::string serviceName, dayTime;
    float duration, basePrice;

    std::cout << "Service: ";
    std::getline(std::cin, serviceName);

    std::cout << std::fixed << std::setprecision(2);

    TherapeuticMassage massage(serviceName, 75, 1400);
    std::cout << "Duration: " << massage.getDuration() << " minutes";
    std::cout << "\nBase Price: $" << massage.getBasePrice() << "\n";
    std::cout << "Time: ";
    std::getline(std::cin, dayTime);
    std::cout << massage.Summary(dayTime, false) << "\n";
    
    std::cout << "=========================================================\n";
    std::cout << "Service: ";
    std::getline(std::cin, serviceName);
    TherapeuticMassage massage2(serviceName, 60, 1200);
    std::cout << "Duration: " << massage2.getDuration() << " minutes";
    std::cout << "\nBase Price: $" << massage2.getBasePrice() << "\n";
    std::cout << "Time: ";
    std::getline(std::cin, dayTime);
    std::cout << "Client Type: Returning Client\n";
    std::cout << massage2.Summary(dayTime, true) << "\n";
    

    };