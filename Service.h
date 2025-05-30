#ifndef SERVICE_H
#define SERVICE_H

#include <string>


class Service
{
protected:
    std::string serviceName;
    float duration;
    float basePrice;

public:
    // Constructors
    Service();
    Service(const std::string& name, float dur, float price);

    // Getters
    std::string getServiceName() const;
    float getDuration() const;
    float getBasePrice() const;

    // Setters
    void setServiceName(const std::string& name);
    void setDuration(float dur);
    void setBasePrice(float price);

    // Virtual methods
    virtual float calculateFinalPrice(bool isReturningClient) const = 0; 
    std::string Summary( bool isReturningClient) const;

    
};

#endif // SERVICE_H