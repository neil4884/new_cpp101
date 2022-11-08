#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template<typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    std::map<T, size_t> lut;
    std::vector<std::pair<T, size_t>> v;
    v.reserve(k.size());
    for (size_t i = mFront; i < (mFront + mSize) % mCap; i++)
        lut[mData[i]]++;
    for (auto &x: k)
        v.emplace_back(x, lut[x]);
    return v;
}

#endif
