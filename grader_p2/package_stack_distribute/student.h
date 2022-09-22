#ifndef __STUDENT_H__
#define __STUDENT_H__

template<typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    size_t *v_size = new size_t[k]();
    std::vector<std::vector<T>> v(k);
    size_t idx = mSize - 1;

    for (size_t i = 0, m = 0; i < mSize; i++) {
        if (m == k)
            m = 0;
        v_size[m] += 1;
        m++;
    }

    for (size_t i = 0; i < k; i++)
        for (size_t j = 0; j < v_size[i]; j++) {
            v[i].push_back(mData[idx]);
            idx--;
        }

    delete[] v_size;

    return v;
}

#endif
