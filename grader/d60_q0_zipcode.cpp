#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class Letter {
public:
    string name;
    string address;
    string province;
    string district;
    int zip;

    bool operator<(const Letter &other) const {
        //**Begin Insert**
//        vector<string> v0 = {name, address, province, district};
//        vector<string> v = {other.name, other.address, other.province, other.district};
        if (zip < other.zip) return true;
        if (zip > other.zip) return false;
        if (address.compare(other.address) < 0) return true;
        if (address.compare(other.address) > 0) return false;
        if (district.compare(other.district) < 0) return true;
        if (district.compare(other.district) > 0) return false;
        if (province.compare(other.province) < 0) return true;
        if (province.compare(other.province) > 0) return false;
        return (name.compare(other.name) < 0);
        //**End Insert**
    }
};

class ZipInfo {
public:
    int zip;
    string province;
    string district;
};

void correctZipAndSortLetters(vector<ZipInfo> &zipinfo, vector<Letter> &letters) {
    //**Begin Insert**
    map<string, int> lut;
    for (ZipInfo &z: zipinfo) {
        lut[z.district + " " + z.province] = z.zip;
    }

    for (Letter &letter: letters) {
        string dt = letter.district + " " + letter.province;
        if (lut[dt] != letter.zip)
            letter.zip = lut[dt];
    }

    sort(letters.begin(), letters.end());

    //**End Insert**
}

int main() {
    int nzip;
    cin >> nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
        ZipInfo z;
        cin >> z.zip >> z.district >> z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin >> n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
        Letter l;
        cin >> l.name >> l.address >> l.district >> l.province >> l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto &l: letters) {
        cout << l.name << " " << l.address << " " << l.district << " " << l.province << " " << l.zip << endl;
    }
}