#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        size_t new_size = mSize + s.mSize;
        T *arr = new T[new_size]();
        for (size_t i = 0; i < s.mSize; i++)
            arr[i] = s.mData[i];
        for (size_t i = 0; i < mSize; i++)
            arr[i + s.mSize] = mData[i];
        delete[] mData;
        mData = arr;
        mSize = mCap = new_size;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        size_t new_size = mSize + q.mSize;
        T *arr = new T[new_size]();
        for (size_t i = 0; i < q.mSize; i++)
            arr[q.mSize - i - 1] = q.mData[(q.mFront + i) & (mCap - 1)];
        for (size_t i = 0; i < mSize; i++)
            arr[i + q.mSize] = mData[i];
        delete[] mData;
        mData = arr;
        mSize = mCap = new_size;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        size_t new_size = mSize + s.mSize;
        T *arr = new T[new_size]();
        for (size_t i = 0; i < mSize; i++)
            arr[i] = mData[(mFront + i) & (mCap - 1)];
        for (size_t i = 0; i < s.mSize; i++)
            arr[i + mSize] = s.mData[s.mSize - i - 1];
        delete[] mData;
        mData = arr;
        mSize = mCap = new_size;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        size_t new_size = mSize + q.mSize;
        T *arr = new T[new_size]();
        for (size_t i = 0; i < mSize; i++)
            arr[i] = mData[(mFront + i) & (mCap - 1)];
        for (size_t i = 0; i < q.mSize; i++)
            arr[i + mSize] = q.mData[(q.mFront + i) & (mCap - 1)];
        delete[] mData;
        mData = arr;
        mFront = 0;
        mSize = mCap = new_size;
    }
}
