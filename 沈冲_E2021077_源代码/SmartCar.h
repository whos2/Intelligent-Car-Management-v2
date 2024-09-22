#ifndef SMARTCAR_H
#define SMARTCAR_H

#include "Chassis.h"
#include "Tire.h"
#include "AGXKit.h"
#include "DualCamera.h"
#include "Gyroscope.h"
#include "Lidar.h"
#include "Display.h"
#include "Battery.h"
#include "StudentInfo.h"
#include <string>
#include <fstream>
#include <iostream>

class SmartCar {
public:
    SmartCar(const std::string& id);
    static SmartCar loadFromFile(const std::string& fileName);

    void setID(const std::string& id);
    void print() const;
    void save(const std::string& fileName) const;

    Chassis& getChassis();
    Tire& getTire();
    AGXKit& getAGXKit();
    DualCamera& getDualCamera();
    Gyroscope& getGyroscope();
    Lidar& getLidar();
    Display& getDisplay();
    Battery& getBattery();
    StudentInfo& getStudentInfo();

private:
    std::string id;
    Chassis chassis;
    Tire tire;
    AGXKit agxKit;
    DualCamera dualCamera;
    Gyroscope gyroscope;
    Lidar lidar;
    Display display;
    Battery battery;
    StudentInfo studentInfo;
};

#endif // SMARTCAR_H