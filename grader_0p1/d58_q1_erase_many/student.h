#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here

    size_t size = mSize - pos.size();
    T *arr = new T[size]();

    for (size_t i = 0, j = 0; i < mSize; i++) {
        if (i == pos[j] && j < pos.size()) {
            j++;
            continue;
        }
        arr[i - j] = mData[i];
    }

    delete[] mData;
    mData = arr;
    mSize = mCap = size;
}

#endif
