#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    size_t r0 = mCap - mSize;
    size_t r = other.mCap - other.mSize;

    return (r0 < r) ? -1 : (r0 == r) ? 0 : 1;
}

#endif
