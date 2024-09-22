#include "Display.h"

Display::Display() : size(11.6), model("super") {}

Display::Display(double sz, const std::string& mdl) : size(sz), model(mdl) {}

void Display::setSize(double newSize) {
    size = newSize;
}

void Display::setModel(const std::string& newModel) {
    model = newModel;
}

void Display::print() const {
    cout << "液晶显示屏尺寸: " << size << endl;
    cout << "液晶显示屏型号: " << model << endl;
}

void Display::save(std::ofstream& outFile) const {
    outFile << "液晶显示屏尺寸: " << size << std::endl;
    outFile << "液晶显示屏型号: " << model << std::endl;
}