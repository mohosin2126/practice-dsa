// using loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // using loop
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += i;
    // }

    // time complexity
    int sum = (n * (n + 1)) / 2;
    cout << sum;
    return 0;
}
