#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H;
    int W;
    cin >> H >> W;

    int XS[H][W + 1] = {0, 0};
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            int X;
            cin >> X;
            XS[i][j + 1] = XS[i][j] + X;
        }
    }

    int Q;
    cin >> Q;
    int A;
    int B;
    int C;
    int D;
    for (int i = 0; i < Q; i++)
    {
        cin >> A >> B >> C >> D;
        int sum = 0;

        for (int j = A; j <= C; j++)
        {
            sum += XS[j - 1][D] - XS[j - 1][B - 1];
        }

        cout << sum << endl;
    }

    return 0;
}