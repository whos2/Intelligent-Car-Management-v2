#include "StudentInfo.h"

StudentInfo::StudentInfo() : studentId(""), studentName("") {}

StudentInfo::StudentInfo(const std::string& id, const std::string& name) : studentId(id), studentName(name) {}

void StudentInfo::setStudentId(const std::string& newId) {
    studentId = newId;
}

void StudentInfo::setStudentName(const std::string& newName) {
    studentName = newName;
}

void StudentInfo::print() const {
    cout << "学生ID: " << studentId << endl;
    cout << "学生姓名: " << studentName << endl;
}

void StudentInfo::save(std::ofstream& outFile) const {
    outFile << "学生ID: " << studentId << std::endl;
    outFile << "学生姓名: " << studentName << std::endl;
}