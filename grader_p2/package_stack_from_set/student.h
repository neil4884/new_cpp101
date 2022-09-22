#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__

#include "stack.h"

//DO NOT INCLUDE ANYTHING


template<typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first, typename std::set<T>::iterator last) {
    CP::stack<T> pool;

    size_t n = 0;
    for (auto it = first; it != last; it++, n++)
        pool.push(*it);

    T *arr = new T[n]();
    for (size_t i = 0; i < n; i++) {
        arr[i] = pool.top();
        pool.pop();
    }

    mData = arr;
    mSize = mCap = n;
}

#endif
