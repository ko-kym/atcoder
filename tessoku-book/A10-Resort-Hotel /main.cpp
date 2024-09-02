#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N + 1] = {};
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int LM[N + 1] = {};
    int RM[N + 1] = {};

    for(int i = 1; i <= N; i++) {
        if(LM[i - 1] < A[i]) {
            LM[i] = A[i];
        } else {
            LM[i] = LM[i - 1];
        }

        if(RM[i - 1] < A[N - i + 1]) {
            RM[i] = A[N - i + 1];
        } else {
            RM[i] = RM[i - 1];
        }
    }

    int D;
    cin >> D;

    for(int i = 0; i < D; i++) {
        int L, R;
        cin >> L >> R;

        int max = 0;
        if(LM[L - 1] < RM[N - R]) {
            max = RM[N - R];
        } else {
            max = LM[L - 1];
        }

        cout << max << endl;
    }

    return 0;
}