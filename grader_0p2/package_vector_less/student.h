#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
    if (!mSize && other.mSize) return true;
    if (mSize && other.mSize) {
        size_t min_size = ((mSize < other.mSize) ? mSize : other.mSize);
        for (size_t i = 0; i < min_size; i++) {
            if (mData[i] < other.mData[i]) return true;
            if (mData[i] > other.mData[i]) return false;
        }
        if (other.mSize > min_size) return true;
    }
    return false;
}

#endif
