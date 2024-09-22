#include "Battery.h"

Battery::Battery() : parameter("24V/15Ah"), supply(24), chargeTime(2) {}

Battery::Battery(const std::string& param, int s, int ct) : parameter(param), supply(s), chargeTime(ct) {}

void Battery::setParameter(const std::string& newParam) {
    parameter = newParam;
}

void Battery::setSupply(int newSupply) {
    supply = newSupply;
}

void Battery::setChargeTime(int newChargeTime) {
    chargeTime = newChargeTime;
}

void Battery::print() const {
    cout << "电池参数: " << parameter << endl;
    cout << "对外供电: " << supply << "V" << endl;
    cout << "充电时长: " << chargeTime << "H" << endl;
}

void Battery::save(std::ofstream& outFile) const {
    outFile << "电池参数: " << parameter << std::endl;
    outFile << "对外供电: " << supply << "V" << std::endl;
    outFile << "充电时长: " << chargeTime << "H" << std::endl;
}