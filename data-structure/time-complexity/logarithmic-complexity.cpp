#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(logN)
    // i*=2 or i/=2 (logarithmic complexity)

    //-----No One ------//
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << endl;
    }

    //-----No Two ------//

    int k;
    cin >> k;
    for (int i = 1; i < n; i++)
    {
        cout << i << endl;
        i = i * k;
    }
    return 0;
}