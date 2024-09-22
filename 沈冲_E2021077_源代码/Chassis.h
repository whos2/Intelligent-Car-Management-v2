#ifndef CHASSIS_H
#define CHASSIS_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Chassis {
public:
    Chassis();
    Chassis(const std::string& chassisId, const std::string& chassisModel);
    void setChassisId(const std::string& chassisId);
    void setChassisModel(const std::string& chassisModel);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string chassisId;
    std::string chassisModel;
};

#endif // CHASSIS_H