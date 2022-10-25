#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template<typename T>
std::vector<CP::queue<T>> CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T>> qs(k);
    std::vector<size_t> q_size(k);

    size_t i = mSize, j = 0, max_size = mSize;
    while (i--) {
        q_size[j]++;
        j = (j == k - 1) ? 0 : j + 1;
    }

    for (i = 0, j = 0; i < max_size; j = (j == k - 1) ? 0 : j + 1, i++) {
        if (q_size[j]) {
            qs[j].push(front());
            pop();
            q_size[j]--;
        }
    }


    return qs;
}

#endif

