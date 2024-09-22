#include "Chassis.h"

Chassis::Chassis() : chassisId("dp00001A"), chassisModel("SCOUT MINI") {}

Chassis::Chassis(const std::string& id, const std::string& model) : chassisId(id), chassisModel(model) {}

void Chassis::setChassisId(const std::string& newId) {
    chassisId = newId;
}

void Chassis::setChassisModel(const std::string& newModel) {
    chassisModel = newModel;
}

void Chassis::print() const {
    cout << "底盘编号: " << chassisId << endl;
    cout << "底盘型号: " << chassisModel << endl;
}

void Chassis::save(std::ofstream& outFile) const {
    outFile << "底盘编号: " << chassisId << std::endl;
    outFile << "底盘型号: " << chassisModel << std::endl;
}