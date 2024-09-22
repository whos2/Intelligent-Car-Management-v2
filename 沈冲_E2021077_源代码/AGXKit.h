#ifndef AGXKIT_H
#define AGXKIT_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class AGXKit {
public:
    AGXKit();
    AGXKit(const std::string& agxModel, int ai, int cudaCores, int tensorCores, int memorySize, int storageSize);
    void setAGXModel(const std::string& agxModel);
    void setAI(int ai);
    void setCUDACores(int cudaCores);
    void setTensorCores(int tensorCores);
    void setMemorySize(int memorySize);
    void setStorageSize(int storageSize);
    void print() const;
    void save(std::ofstream& outFile) const;

private:
    std::string agxModel;
    int ai;
    int cudaCores;
    int tensorCores;
    int memorySize;
    int storageSize;
};

#endif // AGXKIT_H