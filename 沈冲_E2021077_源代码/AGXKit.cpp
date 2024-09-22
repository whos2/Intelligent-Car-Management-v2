#include "AGXKit.h"

AGXKit::AGXKit() : agxModel("AGX Xavier"), ai(32), cudaCores(512), tensorCores(64), memorySize(32), storageSize(32) {}

AGXKit::AGXKit(const std::string& model, int a, int cc, int tc, int ms, int ss) : agxModel(model), ai(a), cudaCores(cc), tensorCores(tc), memorySize(ms), storageSize(ss) {}

void AGXKit::setAGXModel(const std::string& newModel) {
    agxModel = newModel;
}

void AGXKit::setAI(int newAI) {
    ai = newAI;
}

void AGXKit::setCUDACores(int newCudaCores) {
    cudaCores = newCudaCores;
}

void AGXKit::setTensorCores(int newTensorCores) {
    tensorCores = newTensorCores;
}

void AGXKit::setMemorySize(int newMemorySize) {
    memorySize = newMemorySize;
}

void AGXKit::setStorageSize(int newStorageSize) {
    storageSize = newStorageSize;
}

void AGXKit::print() const {
    cout << "AGX型号: " << agxModel << endl;
    cout << "AI性能: " << ai << " TOPS" << endl;
    cout << "CUDA核心: " << cudaCores << endl;
    cout << "Tensor CORE: " << tensorCores << endl;
    cout << "显存: " << memorySize << "G" << endl;
    cout << "存储: " << storageSize << "G" << endl;
}

void AGXKit::save(std::ofstream& outFile) const {
    outFile << "AGX型号: " << agxModel << std::endl;
    outFile << "AI性能: " << ai << " TOPS" << std::endl;
    outFile << "CUDA核心: " << cudaCores << std::endl;
    outFile << "Tensor CORE: " << tensorCores << std::endl;
    outFile << "显存: " << memorySize << "G" << std::endl;
    outFile << "存储: " << storageSize << "G" << std::endl;
}