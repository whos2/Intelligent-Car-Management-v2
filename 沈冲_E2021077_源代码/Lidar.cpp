#include "Lidar.h"

Lidar::Lidar() : lidarModel("RS-Helios-16p"), channels(16), range(100), power(8) {}

Lidar::Lidar(const std::string& model, int ch, int r, int p) : lidarModel(model), channels(ch), range(r), power(p) {}

void Lidar::setLidarModel(const std::string& newModel) {
    lidarModel = newModel;
}

void Lidar::setChannels(int newChannels) {
    channels = newChannels;
}

void Lidar::setRange(int newRange) {
    range = newRange;
}

void Lidar::setPower(int newPower) {
    power = newPower;
}

void Lidar::print() const {
    cout << "激光雷达型号: " << lidarModel << endl;
    cout << "激光雷达通道数: " << channels << endl;
    cout << "激光雷达测试范围: " << range << "m" << endl;
    cout << "激光雷达功耗: " << power << "W" << endl;
}

void Lidar::save(std::ofstream& outFile) const {
    outFile << "激光雷达型号: " << lidarModel << std::endl;
    outFile << "激光雷达通道数: " << channels << std::endl;
    outFile << "激光雷达测试范围: " << range << "m" << std::endl;
    outFile << "激光雷达功耗: " << power << "W" << std::endl;
}