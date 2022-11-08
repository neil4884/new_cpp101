#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
    for (auto &lx: ls) {
        mHeader->prev->next = lx.mHeader->next;
        lx.mHeader->next->prev = mHeader->prev;


        mHeader->prev = lx.mHeader->prev;
        lx.mHeader->prev->next = mHeader;

        mSize += lx.mSize;

        lx.mHeader->next = lx.mHeader;
        lx.mHeader->prev = lx.mHeader;
        lx.mSize = 0;
    }
}

#endif
