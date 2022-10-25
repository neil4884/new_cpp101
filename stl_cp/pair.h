#ifndef _CP_PAIR_INCLUDED_
#define _CP_PAIR_INCLUDED_

#include <iostream>

namespace self {
    template<typename T1, typename T2>
    struct pair {
        T1 first;
        T2 second;

        // default constructor
        pair() : first(), second() {}

        // value constructor
        pair(const T1 &a, const T2 &b) : first(a), second(b) {}

        // assignment operator, copy-swap
        pair<T1, T2> &operator=(pair<T1, T2> other) {
            std::swap(this->first, other.first);
            std::swap(this->second, other.second);
            return *this;
        }

        // equality operator
        bool operator==(const pair<T1, T2> &other) {
            return (first == other.first && second == other.second);
        }

        // comparison operator
        bool operator<(const pair<T1, T2> &other) const {
            return ((first < other.first) ||
                    (first == other.first && second < other.second));
        }
    };
}

#endif

