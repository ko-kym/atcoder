#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    string result;

    while (result.length() < 10)
    {
        if (N % 2 == 1)
        {
            result = "1" + result;
        }else
        {
            result = "0" + result;
        }
        
        N = N / 2;
    }
    
    cout << result << endl;
    return 0;
}