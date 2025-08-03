#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        int diff = M % N;
        if (diff == 0) {
            cout << 0 << endl;
        } else {
            cout << min(diff, N - diff) << endl;
        }
    }
    return 0;
}