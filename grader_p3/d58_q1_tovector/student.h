#ifndef __STUDENT_H_
#define __STUDENT_H_


template<typename T>
std::vector <T> CP::queue<T>::to_vector(int k) const {
    std::vector <T> res(k);
    size_t c = mCap - 1;
    for (size_t i = 0; i < k; i++)
        res[i] = mData[(mFront + i) & c];
    return res;
}

template<typename T>
CP::queue<T>::queue(iterator from, iterator to) {
    size_t s = to-- - from;
    mData = new T[s]();
    mSize = mCap = s;
    mFront = 0;
    while (s)
        mData[--s] = *to--;
}

#endif
