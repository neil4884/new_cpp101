#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template<typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const {
    if (!mSize)
        return -1;
    int h = 0;
    while (pow(2, h + 1) - 1 < mSize)
        ++h;
    return h;
}


#endif

