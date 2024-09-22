#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class StudentInfo {
public:
    StudentInfo();
    StudentInfo(const std::string& studentId, const std::string& studentName);
    void setStudentId(const std::string& studentId);
    void setStudentName(const std::string& studentName);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string studentId;
    std::string studentName;
};

#endif // STUDENTINFO_H