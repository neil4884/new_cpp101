#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
//  write your code here
    this->ensureCapacity(this->mSize * 2);
    CP::vector<T> v(*this);
    size_t size = this->mSize;
    for (auto it1 = this->begin() + size, it2 = v.end() - 1; it1 < this->begin() + 2 * size; it1++, it2--) {
        *it1 = *it2;
        this->mSize++;
    }
}

#endif
