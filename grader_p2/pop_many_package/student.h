#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
void CP::stack<T>::multi_pop(size_t K) {
    mSize = (K >= mSize) ? 0 : mSize - K;
}

template<typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    size_t new_size = (K > mSize) ? mSize : K;
    std::stack<T> s;
    for (size_t i = mSize - new_size; i < mSize; i++)
        s.push(mData[i]);
    mSize -= new_size;
    return s;
}

#endif
