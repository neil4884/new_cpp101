#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    if (first == last || k == 0)
        return;
    size_t size = last - first;
    T *arr = new T[k]();
    for (size_t i = 0; i < k; i++)
        arr[i] = *(first + i);
    for (size_t i = k; i < size; i++)
        *(first + i - k) = *(first + i);
    for (size_t i = size - k; i < size; i++)
        *(first + i) = arr[i - size + k];
    delete[] arr;
}

#endif

// 10 2 6 2

// 0 1;2 3 4 5;6 7 8 9
// 0 1;3 4 5 2;6 7 8 9

// 2 3 4 5 k = 0
// 3 4 5 2 k = 1
// 4 5 2 3 k = 2
// 5 2 3 4 k = 3
