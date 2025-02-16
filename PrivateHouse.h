#ifndef PRIVATEHOUSE_H
#define PRIVATEHOUSE_H

#include "Address.h"

class PrivateHouse : public Address {
public:
    PrivateHouse(string City, string Street, int BuildingNumber);
    string GetType() const override;
};

#endif // PRIVATEHOUSE_H
