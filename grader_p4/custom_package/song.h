#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
public:
    std::string artist, title;
    int count;

    Song() {}

    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) {}

    Song(std::string artist, std::string title, int count) : artist(artist), title(title), count(count) {}

    friend std::ostream &operator<<(std::ostream &out, const Song &s) {
        return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};


//  you have to write something below this line

struct SongComparator1 {
    bool operator()(const Song &s2, const Song &s1) {
        if (s1.artist < s2.artist) return true;
        if (s1.artist > s2.artist) return false;

        if (s1.title < s2.title) return true;
        if (s1.title > s2.title) return false;

        if (s1.count < s2.count) return true;
        if (s1.count > s2.count) return false;

        return false;
    }
};

struct SongComparator2 {
    bool operator()(const Song &s2, const Song &s1) {
        if (s1.count > s2.count) return true;
        if (s1.count < s2.count) return false;

        if (s1.artist < s2.artist) return true;
        if (s1.artist > s2.artist) return false;

        if (s1.title < s2.title) return true;
        if (s1.title > s2.title) return false;

        return false;
    }
};

//  you *MIGHT* have to change the declaration of pq1 and pq2
CP::priority_queue<Song, SongComparator1> pq1;
CP::priority_queue<Song, SongComparator2> pq2;

#endif
