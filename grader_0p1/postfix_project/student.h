#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <vector>
#include <stack>

using namespace std;

int expr(int x, int y, int op) {
    switch (op) {
        case 1: return x - y;
        case 2: return x * y;
        case 3: return x / y;
        default: return x + y;
    }
}

int eval_postfix(vector<pair<int, int>> &v) {
    int a, b, op;
    stack<pair<int, int>> s;
    for (auto &x: v) {
        s.push(x);
        if (x.first) continue;
        op = s.top().second; s.pop();
        a = s.top().second; s.pop();
        b = s.top().second; s.pop();
        s.push(make_pair(1, expr(b, a, op)));
    }
    return s.top().second;
}

#endif
