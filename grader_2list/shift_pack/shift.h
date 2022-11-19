void shift(int k) {
    if (mSize == 0) return;
    size_t to_shift = k >= 0 ? k > mSize ? k % mSize : k : mSize - ((-k) % mSize);
    iterator it = begin();
    for (size_t i = 0; i < to_shift; ++i, ++it);

    node *n = new node(T(), it.ptr->prev, it.ptr);
    it.ptr->prev->next = n;
    it.ptr->prev = n;
    it = iterator(n);

    mHeader->prev->next = mHeader->next;
    mHeader->next->prev = mHeader->prev;
    delete mHeader;

    mHeader = it.ptr;
}