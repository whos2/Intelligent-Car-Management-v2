#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Display {
public:
    Display();
    Display(double size, const std::string& model);
    void setSize(double size);
    void setModel(const std::string& model);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    double size;
    std::string model;
};

#endif // DISPLAY_H