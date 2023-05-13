// Exception handling
// Allocations inside of a try/catch block still need deallocation

#include <stdexcept>

int main() {
    try {
        int N=1024;
        int *arr = new int[N];

        throw std::logic_error("Oops");
        delete[] arr;
    } catch (const std::exception& e) {
        // fizz
    }

    return 0;
}