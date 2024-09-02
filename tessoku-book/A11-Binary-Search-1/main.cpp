#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, X;
    cin >> N >> X;

    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int low = 0;
    int high = N - 1;
    int answer = 0;

    while(low <= high) {
        int mid = (low + high) / 2;
        int guess = A[mid];

        if(guess == X) {
            answer = mid + 1;
            break;
        } else if(guess > X) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}