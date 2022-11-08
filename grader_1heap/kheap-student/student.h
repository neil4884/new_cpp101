#ifndef __STUDENT_H_
#define __STUDENT_H_

#pragma GCC optimize("O2")

#include "priority_queue.h"
#include <iostream>

template<typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while (idx > 0) {
        size_t p = (idx - 1) / 4;
        if (mLess(tmp, mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template<typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c;
    while ((c = 4 * idx + 1) < mSize) {
        size_t idx_max = c;
        int count = 1;
        while (count < 4 && c + count < mSize) {
            if (mLess(mData[idx_max], mData[c + count]))
                idx_max = c + count;
            ++count;
        }
        if (mLess(mData[idx_max], tmp)) break;
        mData[idx] = mData[idx_max];
        idx = idx_max;
    }
    mData[idx] = tmp;
}

#endif

