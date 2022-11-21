#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename KeyT,
        typename MappedT,
        typename CompareT>
CP::map_bst <KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val) {
    CP::map_bst<KeyT, MappedT, CompareT> result;
    for (auto &x: *this) {
        if (x.first >= val) {
            result[x.first] = x.second;
            erase(x.first);
        }
    }

    return result;
}

#endif
