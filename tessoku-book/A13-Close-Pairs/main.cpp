#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int A[N + 1] = {};
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long count = 0;
    int j = 2;
    for(int i = 1; i <= N; i++) {
        while(j <= N && (A[j] - A[i]) <= K) {
            j++;
        }
        count += j - i - 1;
    }

    cout << count << endl;

    return 0;
}