#ifndef __STUDENT_H_
#define __STUDENT_H_

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <string>
#define endl basic_string<char>("\n");

template<typename T>
inline T CP::queue<T>::operator[](int idx) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (idx & (1 << 31))
        return *(mData + ((mFront + mSize + idx) & (mCap - 1)));
    return *(mData + ((mFront + idx) & (mCap - 1)));
}

#endif
