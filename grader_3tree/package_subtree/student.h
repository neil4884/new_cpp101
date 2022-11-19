#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"


template<typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n) {
    //write your code here
    return 0;
}

template<typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst <KeyT, MappedT, CompareT> &left,
                                                                       map_bst <KeyT, MappedT, CompareT> &right) {
    if (mSize == 0) return std::pair<KeyT, MappedT>();
    left = map_bst<KeyT, MappedT, CompareT>();
    right = map_bst<KeyT, MappedT, CompareT>();
    size_t lsize = 0;
    size_t rsize = 0;

    auto it = begin();
    auto root = iterator(mRoot);
    for (; it != root; ++it, ++lsize);
    ++it;
    for (; it != end(); ++it, ++rsize);

    if (mRoot->left != nullptr) {
        left.mRoot = mRoot->left;
        left.mRoot->left->parent = nullptr;
        left.mSize = lsize;
    }

    if (mRoot->right != nullptr) {
        right.mRoot = mRoot->right;
        right.mRoot->right->parent = nullptr;
        right.mSize = rsize;
    }


    mRoot->left = nullptr;
    mRoot->right = nullptr;
    mSize = 1;

    return mRoot->data;
}

#endif

