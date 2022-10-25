#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template<typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const {
    size_t i = 0;
    while (i < mSize) {
        if (mData[i] == k)
            return true;
        ++i;
    }
    return false;
}

template<typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const {
    size_t i = 0;
    int h = 0;
    bool found;
    while (i < mSize) {
        if ((found = (mData[mSize - i - 1] == k)))
            break;
        ++i;
    }
    i = mSize - i - 1;

    if (!found)
        return -1;

    while (i) {
        i = (i - 1) / 2;
        ++h;
    }
    return h;
}

#endif

