#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
using namespace std;

// 9 5 1 2 1
// 9 5: 1
// 5 1: 2
// 2 1: 1


int get_second_min(stack<int> &s) {
    int x1, x2, x;
    stack<int> s1;
    stack<int> q;

    while (!s.empty()) {
        if (s1.empty()) {
            x1 = s.top(); q.push(s.top()); s.pop();
            x2 = s.top(); q.push(s.top()); s.pop();
            if (x1 > x2) {
                s1.push(x1);
                s1.push(x2);
            } else {
                s1.push(x2);
                s1.push(x1);
            }
            continue;
        }
        x = s.top(); q.push(s.top()); s.pop();

        x1 = s1.top(); s1.pop();
        x2 = s1.top(); s1.pop();

        if (x <= x2) {
            if (x < x1) {
                s1.push(x1); s1.push(x);
            } else if (x == x1) {
                s1.push(x2); s1.push(x1);
            } else if (x < x2) {
                s1.push(x); s1.push(x1);
            } else if (x == x2) {
                s1.push(x2); s1.push(x1);
            }
        } else {
            s1.push(x2); s1.push(x1);
        }
    }
    s1.pop();

    while (!q.empty()) {
        s.push(q.top());
        q.pop();
    }

    return s1.top();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    //repeat n-1 times
    for (int last = 1; last < n; last += 1) {
        stack<int> s;
        //build s;
        bool distinct = false;
        for (int i = last; i >= 0; i--) {
            s.push(v[i]);
            if (v[i] != v[0]) distinct = true;
        }
        cout << "--use v[" << last << "] to v[0] --" << "\n";
        if (distinct) {
            //call get_second_min if we have at least 2 distinct value
            int answer = get_second_min(s);
            //print result and s
            cout << "result is " << answer << "\n";
            cout << "size of s is " << s.size() << "\n" << "member of s are ";
            while (s.size() > 0) {
                cout << s.top() << " ";
                s.pop();
            }
            cout << "\n";
        } else {
            cout << "skip because s has only one value\n\n\n";
        }
    }
    return 0;
}
