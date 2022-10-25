#pragma GCC optimize("O3")
#define endl basic_string<char>("\n");
#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template<typename T, typename Comp>
size_t CP::priority_queue<T, Comp>::get_rank(size_t pos) const {
    size_t count = 0;
    size_t i = 0;

    while (i < mSize) {
        if (mLess(mData[pos], mData[i]))
            ++count;
    }
    return count;
}

#endif
