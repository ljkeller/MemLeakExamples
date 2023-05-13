// Bad Operator 2
// Incorrectly deallocating memory by using single-element operator delete

int main() {
    int N=1024;
    int *arr = new int[N];

    delete arr;
    return 0;
}