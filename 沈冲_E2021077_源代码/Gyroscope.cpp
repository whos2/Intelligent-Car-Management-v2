#include "Gyroscope.h"

Gyroscope::Gyroscope() : gyroModel("CH110"), manufacturer("NXP") {}

Gyroscope::Gyroscope(const std::string& model, const std::string& manu) : gyroModel(model), manufacturer(manu) {}

void Gyroscope::setGyroModel(const std::string& newModel) {
    gyroModel = newModel;
}

void Gyroscope::setManufacturer(const std::string& newManu) {
    manufacturer = newManu;
}

void Gyroscope::print() const {
    cout << "陀螺仪型号: " << gyroModel << endl;
    cout << "陀螺仪厂家: " << manufacturer << endl;
}

void Gyroscope::save(std::ofstream& outFile) const {
    outFile << "陀螺仪型号: " << gyroModel << std::endl;
    outFile << "陀螺仪厂家: " << manufacturer << std::endl;
}