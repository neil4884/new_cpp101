#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template<typename T>
void CP::queue<T>::back_to_front() {
    if (mSize == 0)
        return;

    size_t idx = (mFront + mCap - 1) & (mCap - 1);
    mData[idx] = back();
    mFront = idx;
}

#endif
