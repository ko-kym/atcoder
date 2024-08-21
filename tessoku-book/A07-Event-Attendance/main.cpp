#include <bits/stdc++.h>

using namespace std;

int main()
{
    int D;
    int N;

    cin >> D >> N;

    int sum[D + 1] = {0};
    for (int i = 0; i < N; i++)
    {
        int L, R;
        cin >> L >> R;

        sum[L] += 1;
        if (R + 1 <= D)
        {
            sum[R + 1] -= 1;
        }
    }

    for (int i = 1; i <= D; i++)
    {
        sum[i] += sum[i - 1];
    }

    for (int i = 1; i <= D; i++)
    {
        cout << sum[i] << endl;
    }

    return 0;
}