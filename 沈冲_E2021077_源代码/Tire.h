#ifndef TIRE_H
#define TIRE_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Tire {
public:
    Tire();
    Tire(const std::string& tireModel1, const std::string& tireModel2, int tireSize);
    void setTireModel1(const std::string& tireModel1);
    void setTireModel2(const std::string& tireModel2);
    void setTireSize(int tireSize);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string tireModel1;
    std::string tireModel2;
    int tireSize;
};

#endif // TIRE_H