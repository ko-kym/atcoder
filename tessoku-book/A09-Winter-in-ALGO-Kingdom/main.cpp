#include <bits/stdc++.h>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    int Z[H + 1][W + 2] = {};
    int A, B, C, D;
    for(int i = 0; i < N; i++) {
        cin >> A >> B >> C >> D;

        for(int j = A; j <= C; j++) {
            Z[j][B]++;
            Z[j][D + 1]--;
            // for(int k = B; k <= D; k++) {
            //     Z[j][k]++;
            // }
        }
    }

    for(int i = 1; i <= H; i++) {
        int temp = 0;
        for(int j = 1; j <= W; j++) {
            Z[i][j] += temp;
            temp = Z[i][j];
        }
    }

    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            if(j == W) {
                cout << Z[i][j];
            } else {
                cout << Z[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}