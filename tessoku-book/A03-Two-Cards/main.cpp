#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int K;
    cin >> N;
    cin >> K;

    int red[N];
    int blue[N];

    for (int i = 0; i < N; i++)
    {
        cin >> red[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> blue[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int sum;
            sum = red[i] + blue[j];
            if(sum == K){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;
    return 0;
}