// Looping
// Allocations inside of a loop block still need deallocation

int main() {
    int i=1024;
    do {
        int *a = new int;

        // logic here
        if (i&1) { delete a; } // Some form of conditional delete
        i--;
    } while (i>0);

    return 0;
}