#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Student {
public:
    int age;
    string fname, lname;
};

class StudentComparator {
public:
    bool operator()(const Student &s1, const Student &s2) const {
        return (s1.age > s2.age) ||
               (s1.age == s2.age && s1.fname < s2.fname) ||
               (s1.age == s2.age && s1.fname == s2.fname && s1.lname < s2.lname);
    }
};

int main() {
    vector<Student> students;
    //……
    sort(students.begin(), students.end(), StudentComparator());
}
