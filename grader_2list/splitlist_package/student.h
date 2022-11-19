//void splitList(list <T> &list1, list <T> &list2) {
//    size_t na = (mSize + 1) / 2;
//    size_t nb = mSize - na;
//
//    iterator ita1 = begin();
//    iterator ita2 = begin();
//    iterator itb1 = begin();
//    iterator itb2 = iterator(mHeader->prev);
//    for (int i = 0; i < na; ++i, ++itb1, ++ita2);
//    ++itb1;
//
//    ita1.ptr->prev = list1.mHeader->prev;
//    list1.mHeader->prev->next = ita1.ptr;
//
//    ita2.ptr->next = list1.mHeader;
//    list1.mHeader->prev = ita2.ptr;
//
//    itb1.ptr->prev = list2.mHeader->prev;
//    list2.mHeader->prev->next = itb1.ptr;
//
//    itb2.ptr->next = list2.mHeader;
//    list2.mHeader->prev = itb2.ptr;
//
//    list1.mSize += na;
//    list2.mSize += nb;
//    mSize = 0;
//
//    mHeader->next = mHeader;
//    mHeader->prev = mHeader;
//}
