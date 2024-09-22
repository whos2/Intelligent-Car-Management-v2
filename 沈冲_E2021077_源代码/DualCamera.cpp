#include "DualCamera.h"

DualCamera::DualCamera() : cameraModel("RealSense D435i"), frameResolution("1920*1080"), frameRate(30), fov("87*58"), depthFrameRate(90) {}

DualCamera::DualCamera(const std::string &model, const std::string &res, int rate, const std::string &fov, int depthRate) : cameraModel(model), frameResolution(res), frameRate(rate), fov(fov), depthFrameRate(depthRate) {}

void DualCamera::setCameraModel(const std::string &newModel)
{
    cameraModel = newModel;
}

void DualCamera::setFrameResolution(const std::string &newRes)
{
    frameResolution = newRes;
}

void DualCamera::setFrameRate(int newRate)
{
    frameRate = newRate;
}

void DualCamera::setFOV(const std::string &newFOV)
{
    fov = newFOV;
}

void DualCamera::setDepthFrameRate(int newDepthRate)
{
    depthFrameRate = newDepthRate;
}

void DualCamera::print() const
{
    cout << "摄像头型号: " << cameraModel << endl;
    cout << "摄像头帧分辨率: " << frameResolution << endl;
    cout << "摄像头帧率: " << frameRate << endl;
    cout << "FOV: " << fov << endl;
    cout << "深度帧率: " << depthFrameRate << endl;
}

void DualCamera::save(std::ofstream &outFile) const
{
    outFile << "摄像头型号: " << cameraModel << std::endl;
    outFile << "摄像头帧分辨率: " << frameResolution << std::endl;
    outFile << "摄像头帧率: " << frameRate << std::endl;
    outFile << "FOV: " << fov << std::endl;
    outFile << "深度帧率: " << depthFrameRate << std::endl;
}