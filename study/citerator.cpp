#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using v_int = vector<int>;

int main() {
    v_int v1 = {1, 2, 3, 4, 99, 5, 6};
    v_int v2 = {99, 100, 101, 102};
    auto x = 10;
//    v_int::iterator it1 = v1.begin();
//    while (it1 != v1.end()) {
//        cout << *it1 << endl;
//        it1++;
//    }
    x++;

    v_int::iterator it1 = v1.begin();
    auto it2 = v2.begin();
    cout << it2 - it1 << endl;

    for (v_int::iterator ix = v1.begin(); ix != v1.end(); ix++) {
        cout << ix - v1.begin() << " " << *ix << endl;
    }



    return 0;
}