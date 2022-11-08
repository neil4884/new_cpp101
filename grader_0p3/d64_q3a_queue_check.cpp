#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int n, mFront, mSize, mCap, last, correction;

    cin >> n;
    while (n--) {
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if (mFront < mCap && mSize <= mCap && last < mCap && last == (mFront + mSize) % mCap)
            cout << "OK";
        else {
            cout << "WRONG ";
            switch (correction) {
                case 1: // mFront
                    cout << (last - mSize + mCap) % mCap;
                    break;
                case 2: // mSize
                    cout << (last - mFront + mCap) % mCap;
                    break;
                case 3: // mCap
                    if (last == mFront + mSize)
                        cout << last + 1;
                    else
                        cout << mFront + mSize - last;
                    break;
                case 4: // last
                    cout << (mFront + mSize) % mCap;
                    break;
                default:
                    break;
            }
        }
        cout << '\n';
    }
    return 0;
}