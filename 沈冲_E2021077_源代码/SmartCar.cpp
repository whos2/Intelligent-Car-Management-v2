#include "SmartCar.h"
#include <sstream>  // 确保包含此头文件以使用 std::istringstream


SmartCar::SmartCar(const std::string& id) : id(id) {}

void SmartCar::setID(const std::string& newID) {
    id = newID;
}

void SmartCar::print() const {
    std::cout << "ID: " << id << std::endl;
    chassis.print();
    tire.print();
    agxKit.print();
    dualCamera.print();
    gyroscope.print();
    lidar.print();
    display.print();
    battery.print();
    studentInfo.print();
}

void SmartCar::save(const std::string& fileName) const {
    std::ofstream outFile(fileName, std::ios::out | std::ios::binary);
    if (outFile.is_open()) {
        outFile << "ID: " << id << std::endl;
        chassis.save(outFile);
        tire.save(outFile);
        agxKit.save(outFile);
        dualCamera.save(outFile);
        gyroscope.save(outFile);
        lidar.save(outFile);
        display.save(outFile);
        battery.save(outFile);
        studentInfo.save(outFile);
        outFile.close();
    } else {
        std::cerr << "无法打开文件进行写入: " << fileName << std::endl;
    }
}

SmartCar SmartCar::loadFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (!inFile.is_open()) {
        std::cerr << "无法打开文件进行读取: " << fileName << std::endl;
        return SmartCar(""); // 返回一个空的 SmartCar 对象
    }

    std::string id;
    std::string line;
    std::getline(inFile, line); // 读取第一行，假设第一行是 ID
    size_t idEndPos = line.find_last_not_of(" \r\t\n");
    id = line.substr(3, idEndPos - 3);

    Chassis chassis;
    Tire tire;
    AGXKit agxKit;
    DualCamera dualCamera;
    Gyroscope gyroscope;
    Lidar lidar;
    Display display;
    Battery battery;
    StudentInfo studentInfo;

    while (std::getline(inFile, line)) {
        if (line.find("底盘编号: ") != std::string::npos) {
            size_t startPos = line.find("底盘编号: ") + 11;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            chassis.setChassisId(line.substr(startPos, endPos - startPos));
        } else if (line.find("轮胎型号1: ") != std::string::npos) {
            size_t startPos = line.find("轮胎型号1: ") + 12;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            tire.setTireModel1(line.substr(startPos, endPos - startPos));
        } else if (line.find("AGX型号: ") != std::string::npos) {
            size_t startPos = line.find("AGX型号: ") + 11;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            agxKit.setAGXModel(line.substr(startPos, endPos - startPos));
        } else if (line.find("摄像头型号: ") != std::string::npos) {
            size_t startPos = line.find("摄像头型号: ") + 12;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            dualCamera.setCameraModel(line.substr(startPos, endPos - startPos));
        } else if (line.find("陀螺仪型号: ") != std::string::npos) {
            size_t startPos = line.find("陀螺仪型号: ") + 12;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            gyroscope.setGyroModel(line.substr(startPos, endPos - startPos));
        } else if (line.find("激光雷达型号: ") != std::string::npos) {
            size_t startPos = line.find("激光雷达型号: ") + 12;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            lidar.setLidarModel(line.substr(startPos, endPos - startPos));
        } else if (line.find("液晶显示屏尺寸: ") != std::string::npos) {
            size_t startPos = line.find("液晶显示屏尺寸: ") + 12;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            try {
                double size = std::stod(line.substr(startPos, endPos - startPos));
                display.setSize(size);
            } catch (const std::invalid_argument& e) {
                std::cerr << "无效的数字格式: " << line.substr(startPos, endPos - startPos) << std::endl;
            }
        } else if (line.find("电池参数: ") != std::string::npos) {
            size_t startPos = line.find("电池参数: ") + 12;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            battery.setParameter(line.substr(startPos, endPos - startPos));
        } else if (line.find("学生ID: ") != std::string::npos) {
            size_t startPos = line.find("学生ID: ") + 8;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            studentInfo.setStudentId(line.substr(startPos, endPos - startPos));
        } else if (line.find("学生姓名: ") != std::string::npos) {
            size_t startPos = line.find("学生姓名: ") + 10;
            size_t endPos = line.find_last_not_of(" \r\t\n");
            studentInfo.setStudentName(line.substr(startPos, endPos - startPos));
        }
    }

    inFile.close();
    SmartCar car(id);
    car.chassis = chassis;
    car.tire = tire;
    car.agxKit = agxKit;
    car.dualCamera = dualCamera;
    car.gyroscope = gyroscope;
    car.lidar = lidar;
    car.display = display;
    car.battery = battery;
    car.studentInfo = studentInfo;

    return car;
}

StudentInfo& SmartCar::getStudentInfo() {
    return studentInfo;
}