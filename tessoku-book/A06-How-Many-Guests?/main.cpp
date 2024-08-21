#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int Q;

    cin >> N >> Q;

    int A[N];
    int S[N + 1];
    S[0] = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        S[i + 1] = A[i] + S[i];
    }
    
    int L[Q];
    int R[Q];

    for (int i = 0; i < Q; i++)
    {
        cin >> L[i] >> R[i];
    }

    for (int i = 0; i < Q; i++)
    {
        int sum = 0;
        sum = S[R[i]] - S[L[i] - 1];
        cout << sum << endl;
    }
    
    return 0;
}