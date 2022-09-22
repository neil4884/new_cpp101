#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data) {
    if (data.size() > 0) {
        size_t size = mSize + data.size();
        T *arr = new T[size]();

        sort(data.begin(), data.end());

        for (size_t i = 0, j = 0; i <= mSize; i++) {
            if (j < data.size() && (i == data[j].first)) {
                arr[i + j] = data[j].second;
                j++;
            }
            if (i < mSize)
                arr[i + j] = mData[i];
        }

        delete[] mData;
        mData = arr;
        mCap = mSize = size;
    }
}

#endif
