#include "TherapeuticMassage.h"
#include <string>
#include <sstream>
#include <iomanip>


TherapeuticMassage::TherapeuticMassage() : Service() {}
TherapeuticMassage::TherapeuticMassage(const std::string& name, float dur, float price)
    : Service(name, dur, price) {}


float TherapeuticMassage::calculateFinalPrice(bool isReturningClient) const {
    float finalPrice = basePrice;
    if (duration > 60) {finalPrice += 200.0f;} // Additional charge for sessions longer than 60 minutes}
    
    // Apply a 10% discount for returning clients
    if (isReturningClient) {finalPrice *= 0.9f;} // 10% discount
    
    return finalPrice;
}

std::string TherapeuticMassage::Summary(std::string dayTime, bool isReturningClient) const {
    std::ostringstream oss;
    if (isReturningClient) {
        oss << "\nClient Type: Returning Client";
    }
    if (duration > 60) {
        oss << "\nNote: Duration exceeds 60 minutes. Surcharge applied: $200";
    }
    oss << "\nFinal Price: $" << std::fixed << std::setprecision(2) << calculateFinalPrice(isReturningClient) << "\nBooking Confirmed";
    return oss.str();
}