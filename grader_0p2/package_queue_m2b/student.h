#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template<typename T>
void CP::queue<T>::move_to_back(size_t pos) {
    size_t rounds = mSize - pos - 1, p = mFront + pos, c = mCap - 1;
    T to_move = mData[p & c];
    for (size_t i = 0; i < rounds; i++)
        mData[(p + i) & c] = mData[(p + i + 1) & c];
    mData[(mFront + mSize - 1) & c] = to_move;
}

#endif