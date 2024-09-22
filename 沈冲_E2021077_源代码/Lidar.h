#ifndef LIDAR_H
#define LIDAR_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Lidar {
public:
    Lidar();
    Lidar(const std::string& lidarModel, int channels, int range, int power);
    void setLidarModel(const std::string& lidarModel);
    void setChannels(int channels);
    void setRange(int range);
    void setPower(int power);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string lidarModel;
    int channels;
    int range;
    int power;
};

#endif // LIDAR_H