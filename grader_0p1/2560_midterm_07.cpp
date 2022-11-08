#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MTGCard {
public:
    string name;
    int genericCost;
    vector<pair<string, int>> elementCost;

    MTGCard(const string &name, const int genericCost, const vector<pair<string, int>> &elementCost):
    name(name), genericCost(genericCost), elementCost(elementCost){}

    int sumCost() const {
        int total = genericCost;
        for (auto &x: elementCost)
            total += x.second;
        return total;
    }

    bool operator<(const MTGCard &other) const {
        return (this->sumCost() < other.sumCost()) ||
               (this->sumCost() == other.sumCost() && (this->name).compare(other.name) < 0);
    }

};

int main() {
    MTGCard card1("Car", 10, {{"1", 20}});
    MTGCard card2("Dar", 10, {{"1", 20}});
    cout << (card1 < card2);
}
