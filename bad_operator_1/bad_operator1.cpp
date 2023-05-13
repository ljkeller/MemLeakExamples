// Bad Operator 1
// Incorrectly deallocating memory by using array delete operator

int main() {
    int* ptr = new int;

    delete[] ptr;
    return 0;
}