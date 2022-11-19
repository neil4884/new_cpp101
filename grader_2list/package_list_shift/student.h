#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
void CP::list<T>::shift_left() {
    if (!mSize) return;
    iterator it = begin();
    T v = *it;
    erase(it);
    insert(end(), v);
}

#endif
