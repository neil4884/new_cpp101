#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    if (mSize == 0 || a == b) return a;
    size_t n = 0;
    iterator c = a, d = a;

    for (; c != b; ++n, ++c);
    n = (n + 1) / 2;

    --b;
    for (size_t i = 0; i < n; ++i, ++a, --b) {
        std::swap(*a, *b);
    }
    return d;
}

#endif
