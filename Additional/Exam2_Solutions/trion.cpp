#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int lastNumber;
    cin >> lastNumber;
    bool lastIsBigger = true;
    for (int i = 1; i < N; ++i) {
        int current;
        cin >> current;

        if (i == 1) {
            if (current < lastNumber) {
                lastIsBigger = false;
            }
            lastNumber = current;
            continue;
        }

        if (lastNumber == current ||
            lastIsBigger == lastNumber < current) {
            cout << 0;
            return 0;
        }
        lastIsBigger = !lastIsBigger;
        lastNumber = current;
    }
    cout << 1;
    return 0;
}