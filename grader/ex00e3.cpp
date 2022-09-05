#include <iostream>
#include <set>

using namespace std;

int main() {
    int members = 0, N, inp;
    bool outside = false;
    set<int> s;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> inp;
        members++;
        s.insert(inp);
        if (inp > N) outside = true;
    }

    if (s.size() != members or outside) cout << "NO";
    else cout << "YES";

    return 0;
}
