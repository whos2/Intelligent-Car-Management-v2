#ifndef DUALCAMERA_H
#define DUALCAMERA_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class DualCamera {
public:
    DualCamera();
    DualCamera(const std::string& cameraModel, const std::string& frameResolution, int frameRate, const std::string& fov, int depthFrameRate);
    void setCameraModel(const std::string& cameraModel);
    void setFrameResolution(const std::string& frameResolution);
    void setFrameRate(int frameRate);
    void setFOV(const std::string& fov);
    void setDepthFrameRate(int depthFrameRate);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string cameraModel;
    std::string frameResolution;
    int frameRate;
    std::string fov;
    int depthFrameRate;
};

#endif // DUALCAMERA_H