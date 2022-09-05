#include <iostream>
#include <iomanip>
#include <map>
#include <vector>

using namespace std;

float avg(vector<int> &v) {
    float res = 0;
    int count = 0;
    for (auto &x: v) {
        res += (float) x;
        count++;
    }
    return res / (float) count;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout << fixed << setprecision(2);

    int N, inp3;
    cin >> N;
    string inp1, inp2;
    map<string, vector<int>> subjects, teachers;

    for (int i = 0; i < N; i++) {
        cin >> inp1 >> inp2 >> inp3;
        subjects[inp1].push_back(inp3);
        teachers[inp2].push_back(inp3);
    }

    for (auto &x: subjects) {
        cout << x.first << ' ' << avg(x.second) << '\n';
    }

    for (auto &x: teachers) {
        cout << x.first << ' ' << avg(x.second) << '\n';
    }

    return 0;
}
