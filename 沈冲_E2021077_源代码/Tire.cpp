#include "Tire.h"

Tire::Tire() : tireModel1("公路轮"), tireModel2("麦克纳姆轮"), tireSize(175) {}

Tire::Tire(const std::string& model1, const std::string& model2, int size) : tireModel1(model1), tireModel2(model2), tireSize(size) {}

void Tire::setTireModel1(const std::string& newModel1) {
    tireModel1 = newModel1;
}

void Tire::setTireModel2(const std::string& newModel2) {
    tireModel2 = newModel2;
}

void Tire::setTireSize(int newSize) {
    tireSize = newSize;
}

void Tire::print() const {
    cout << "轮胎型号1: " << tireModel1 << endl;
    cout << "轮胎型号2: " << tireModel2 << endl;
    cout << "轮胎尺寸: " << tireSize << "mm" << endl;
}

void Tire::save(std::ofstream& outFile) const {
    outFile << "轮胎型号1: " << tireModel1 << std::endl;
    outFile << "轮胎型号2: " << tireModel2 << std::endl;
    outFile << "轮胎尺寸: " << tireSize << "mm" << std::endl;
}