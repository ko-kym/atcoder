#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int K;
    cin >> N >> K;

    int result = 0;

    int red[N];
    int blue[N];

    for (int i = 1; i <= N; i++)
    {
        red[i - 1] = i;
        blue[i - 1] = i;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int white = K - (red[i] + blue[j]);

            if (white <= N && white > 0)
            {
                result++;
            }
        }
    }

    cout << result << endl;
    
    return 0;
}