// Leaking system resources
// Failing to release system resources appropriately will often result in definitely lost or still reachable memory

#include <iostream>
#include <cstdio>

void fizzFile(const std::string& fname) {
    FILE* file = std::fopen(fname.c_str(), "rb");
    // no fclose
}

int main() {
    fizzFile("../README.md");
    return 0;
}