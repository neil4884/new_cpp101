#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

template<typename T1, typename T2>
void print(map<T1, T2> &_m) {
    for (auto &x: _m) {
        cout << x.first << ' ' << x.second << endl;
    }
    cout << "-----" << endl;
}

template<typename T>
void print(T &_s) {
    for (int _: _s) {
        cout << _ << endl;
    }
    cout << "-----" << endl;
}

void pr1(int from = 0, int to = 5) {
    if (from < to) {
        cout << from << ' ';
        pr1(from + 1, to);
    }
}

void pr2(int from = 0, int to = 5) {
    if (from < to) {
        pr2(from + 1, to);
        cout << from << ' ';
    }
}

template<typename T>
class node {
public:
    T *data;
    node *left, *right;

    node() : data{new T()}, left{nullptr}, right{nullptr} {}

    node(T *data, node *left, node *right) : data{data}, left{left}, right{right} {}

    int node_size() {
        if (this->left == nullptr && this->right == nullptr) return 1;
        return 1 + this->left->node_size() + this->right->node_size();
    }

};

template<typename T>
int node_size(node<T> *n) {
    if (n == nullptr) return 0;
    return 1 + node_size(n->left) + node_size(n->right);
}

int main() {
    int *a = new int(8);
    auto *n1 = new node<int>(a, new node<int>(), new node<int>());
    auto *n2 = new node<int>();
    auto *n = new node<int>(a, n1, n2);

    cout << *a << '\n';

    cout << node_size(n) << '\n';


    cout << n->node_size();
}
