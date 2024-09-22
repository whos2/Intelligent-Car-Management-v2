#ifndef BATTERY_H
#define BATTERY_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Battery {
public:
    Battery();
    Battery(const std::string& parameter, int supply, int chargeTime);
    void setParameter(const std::string& parameter);
    void setSupply(int supply);
    void setChargeTime(int chargeTime);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string parameter;
    int supply;
    int chargeTime;
};

#endif // BATTERY_H