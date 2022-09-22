#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template<typename T>
size_t CP::stack<T>::size() const {
    return v.size();
}

template<typename T>
const T &CP::stack<T>::top() const {
    return *(v.end() - 1);
}

template<typename T>
void CP::stack<T>::push(const T &element) {
    v.push_back(element);
}

template<typename T>
void CP::stack<T>::pop() {
    v.pop_back();
}

template<typename T>
void CP::stack<T>::deep_push(const T &element, int depth) {
    CP::stack<T> s;
    int i = 0;
    while (!empty() && i < depth) {
        s.push(top());
        pop();
        i++;
    }
    s.push(element);
    while (!s.empty()) {
        push(s.top());
        s.pop();
    }
}

template<typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
    for (const auto &x: w) {
        push(x);
    }
}

template<typename T>
void CP::stack<T>::pop_until(const T &e) {
    while (!empty() && top() != e) {
        pop();
    }
}

#endif

