#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos) {
    CP::list<T> result;
    if (mSize == 0) return result;
    if (it == end()) return result;
    if (it == begin()) {
        std::swap(mHeader, result.mHeader);
        std::swap(mSize, result.mSize);
        return result;
    }

    iterator it1 = it; --it1;
    iterator it3 = iterator(mHeader->prev);

    result.mSize = mSize - pos;
    mSize = pos;

    it1.ptr->next = mHeader;
    mHeader->prev = it1.ptr;

    result.mHeader->next = it.ptr;
    it.ptr->prev = result.mHeader;

    it3.ptr->next = result.mHeader;
    result.mHeader->prev = it3.ptr;

    return result;
}

#endif
