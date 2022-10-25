#ifndef __STUDENT_H_
#define __STUDENT_H_


template<typename T, typename Comp>
bool CP::priority_queue<T, Comp>::operator==(const CP::priority_queue<T, Comp> &other) const {
    if (mSize != other.mSize)
        return false;

    CP::priority_queue<T, Comp> pq(*this);
    CP::priority_queue<T, Comp> pq2(other);

    while (!pq.empty()) {
        if (pq.top() != pq2.top())
            return false;
        pq.pop();
        pq2.pop();
    }

    return true;
}

#endif
