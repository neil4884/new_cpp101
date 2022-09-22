#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template<typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    T to_move = mData[(mFront + pos) & (mCap - 1)];
    for (size_t i = 0; i < pos; i++) {
        mData[(mFront + pos - i) & (mCap - 1)] = mData[(mFront + pos - i - 1) & (mCap - 1)];
    }
    mData[mFront] = to_move;
}

#endif
