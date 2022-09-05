#include <iostream>

int main() {
    int a[] = {1, 2, 3, 4};
    for(int i = 0; i < sizeof(a) / sizeof(a[i]); i++) {
        std::cout << *(a+i) << " ";
    }
    return 0;
}
