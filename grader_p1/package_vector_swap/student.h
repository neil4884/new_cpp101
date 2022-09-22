#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
    size_t size = mSize;
    size_t cap = mCap;
    T *p_data = mData;

    mSize = other.mSize;
    mCap = other.mCap;
    mData = other.mData;

    other.mSize = size;
    other.mCap = cap;
    other.mData = p_data;

}

#endif
