#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
    //write your code only in this function
    int max_b = b;
    int par = 0;

    for (auto it = v.begin() + a; it <= v.begin() + max_b; it++) {
        if (((it - v.begin()) + par) % 2 == 0) {
            v.erase(it);
            max_b--;
            par++;
        }
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
    remove_even(v,a,b);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
