#include "Service.h"

Service::Service() : serviceName(""), duration(0), basePrice(0) {}
Service::Service(const std::string& name, float dur, float price)
    : serviceName(name), duration(dur), basePrice(price) {}

std::string Service::getServiceName() const {return serviceName;}
float Service::getDuration() const {return duration;}
float Service::getBasePrice() const {return basePrice;}

void Service::setServiceName(const std::string& name) {serviceName = name;}
void Service::setDuration(float dur) {duration = dur;}
void Service::setBasePrice(float price) {basePrice = price;}

float Service::calculateFinalPrice(bool isReturningClient) const {
    // This method should be overridden in derived classes
    return 0; // Placeholder implementation
}

std::string Service::Summary( bool isReturningClient) const {
    // This method should be overridden in derived classes
    return ""; // Placeholder implementation
}