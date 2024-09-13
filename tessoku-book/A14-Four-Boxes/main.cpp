#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int A[N];
    int B[N];
    int C[N];
    int D[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> D[i];
    }

    int AB_sum[N * N];
    int CD_sum[N * N];

    int id = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            AB_sum[id++] = A[i] + B[j];
        }
    }

    id = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            CD_sum[id++] = C[i] + D[j];
        }
    }

    sort(AB_sum, AB_sum + N * N);

    for(int i = 0; i < N * N; i++) {
        int target = K - CD_sum[i];
        if(binary_search(AB_sum, AB_sum + N * N, target)) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}