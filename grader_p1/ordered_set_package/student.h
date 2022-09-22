#include <vector>
#include <set>
#include <algorithm>

using namespace std;

template<typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B) {
    vector<T> v(A);
    set<T> s(A.begin(), A.end());
    v.reserve(200000);

    for (auto x: B) {
        if (s.find(x) == s.end()) {
            v.push_back(x);
        }
    }

    return v;
}

template<typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    vector<T> u(B);
    v.reserve(100000);

    sort(u.begin(), u.end());

    for (auto x: A) {
        if (binary_search(u.begin(), u.end(), x)) {
            v.push_back(x);
        }
    }

    return v;
}
