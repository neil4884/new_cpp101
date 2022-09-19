#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <unordered_set>

template<typename T>
void CP::vector<T>::uniq() {
    using namespace std;
    unordered_set<T> s;
    T *arr1 = new T[mSize]();

    for (size_t i = 0, j = 0; i < mSize; i++) {
        if (s.find(mData[i]) == s.end()) {
            s.insert(mData[i]);
            arr1[j] = mData[i];
            j++;
        }
    }

    delete[] mData;

    mData = arr1;
    mSize = mCap = s.size();
}

#endif
