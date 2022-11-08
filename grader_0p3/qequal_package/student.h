#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>
#define endl basic_string<char>("\n")

#pragma GCC target("avx2")
#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")

inline size_t cap_mod(const size_t &x, const size_t &y) {
    if (x >= y)
        return x - y;
    return x;
}

template<typename T>
inline bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    if (mSize != other.mSize)
        return false;
    for (size_t i = 0; i < mSize; i++)
        if (mData[cap_mod(mFront + i, mCap)] != other.mData[cap_mod(other.mFront + i, other.mCap)])
            return false;
    return true;
}

#endif
