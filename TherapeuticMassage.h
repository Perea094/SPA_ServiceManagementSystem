#ifndef THERAPEUTICMASSAGE_H
#define THERAPEUTICMASSAGE_H

#include "Service.h"
#include <string>

class TherapeuticMassage : public Service
{
    public:
        // Constructors
        TherapeuticMassage();
        TherapeuticMassage(const std::string& name, float dur, float price);
        // Override methods
        float calculateFinalPrice(bool isReturningClient) const override;
        std::string Summary(std::string dayTime, bool isReturningClient) const;

};


#endif // THERAPEUTICMASSAGE_H