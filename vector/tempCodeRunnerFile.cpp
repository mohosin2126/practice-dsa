// vector initializations
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    

    vector<int>v2(v);

    for (int i = 0; i < 5; i++)
    {
        cout << v2[i]<<" ";
    }

    return 0;
}
