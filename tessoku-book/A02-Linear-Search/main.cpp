#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int X;
    cin >> N;
    cin >> X;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if(A[i] == X){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}