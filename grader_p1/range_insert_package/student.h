#ifndef __STUDENT_H_
#define __STUDENT_H_


template<typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last) {
    size_t size = mSize + last - first;
    size_t i = 0;
    T *arr = new T[size]();

    for (; i < position - begin(); i++)
        arr[i] = mData[i];

    for (; first < last; first++, i++)
        arr[i] = *first;

    for (auto it = position + (last - first); it < end(); it++, i++)
        arr[i] = *it;

    delete[] mData;
    mData = arr;
    mSize = mCap = size;
}

#endif
