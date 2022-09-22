#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    if (b < a) {
        auto x = a;
        a = b;
        b = x;
    }

    if (m == 0 ||
        a < begin() || a >= end() ||
        a + m - 1 < begin() || a + m - 1 >= end() ||
        b < begin() || b >= end() ||
        b + m - 1 < begin() || b + m - 1 >= end() ||
        b < a + m)
        return false;

    T *arr = new T[m]();

    for (size_t i = 0; i < m; i++)
        arr[i] = *(a + i);
    for (size_t i = 0; i < m; i++)
        *(a + i) = *(b + i);
    for (size_t i = 0; i < m; i++)
        *(b + i) = arr[i];

    delete[] arr;

    return true;
}

#endif
