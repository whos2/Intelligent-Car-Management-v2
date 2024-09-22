#ifndef GYROSCOPE_H
#define GYROSCOPE_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Gyroscope {
public:
    Gyroscope();
    Gyroscope(const std::string& gyroModel, const std::string& manufacturer);
    void setGyroModel(const std::string& gyroModel);
    void setManufacturer(const std::string& manufacturer);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string gyroModel;
    std::string manufacturer;
};

#endif // GYROSCOPE_H