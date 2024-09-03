#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int A[N + 1] = {};
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max_second = pow(10, 9);
    int min_second = 1;
    int mid_second = 0;

    while(min_second < max_second) {
        mid_second = (max_second + min_second) / 2;

        long long leaflets = 0;
        for(int i = 0; i < N; i++) {
            leaflets += mid_second / A[i];
        }

        if(leaflets >= K) {
            max_second = mid_second;
        } else {
            min_second = mid_second + 1;
        }
    }

    cout << min_second << endl;

    return 0;
}