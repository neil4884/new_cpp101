#ifndef __STUDENT_H__
#define __STUDENT_H__

template<typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m) {
    if (m == 0)
        return;

    size_t depth = (k > mSize) ? mSize : k;
    size_t cSize = (m > s2.mSize) ? s2.mSize : m;

    expand(size() + cSize);
    mSize = mCap;

    for (size_t i = mSize - 1; i >= mSize - depth; i--) {
        mData[i] = mData[i - cSize];
    }

    for (size_t i = mSize - depth - cSize, j = 0; j < cSize; i++, j++) {
        mData[i] = s2.mData[s2.mSize - cSize + j];
    }

    s2.mSize -= cSize;

}

#endif
