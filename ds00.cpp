#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
    vector<int> sw;
    for (auto it = v.begin() + a; it < v.begin() + b + 1; it++) {
        sw.push_back(*it);
    }
    auto it_sw = sw.end() - 1;
    for (auto it = v.begin() + a; it < v.begin() + b + 1; it++, it_sw--) {
        *it = *it_sw;
    }
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v,a,b);
    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}