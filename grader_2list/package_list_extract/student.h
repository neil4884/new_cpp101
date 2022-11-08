#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output) {
    if (mSize == 0 || a == b) return;
    for (auto it = a; it != b; ++it) {
        if (*it == value) {
            iterator itb = output.begin();
            node *n = new node(value, itb.ptr->prev, itb.ptr);
            itb.ptr->prev->next = n;
            itb.ptr->prev = n;
            ++output.mSize;

            iterator tmp(it.ptr->next);
            it.ptr->prev->next = it.ptr->next;
            it.ptr->next->prev = it.ptr->prev;
            delete it.ptr;
            --mSize;

        }
    }
}

#endif
