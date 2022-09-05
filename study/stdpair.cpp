#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int>& v) {
    cout << "size of v=" << v.size() << ": ";
    for (int i : v) {
        cout << i << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {9, -1, 3, 7, 99, 2, 1, 4};
    int x = 99;
    cout << find(v.begin(), v.end(), x) - v.begin();
}
