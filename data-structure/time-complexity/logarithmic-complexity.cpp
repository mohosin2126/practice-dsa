#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(logN)
    // i*=2 or i/=2 (logarithmic complexity)
    int n;
    cin>>n;
    for(int i=1;i<=n;i*=2){
        cout<<i<<endl;
    }
    return 0;
}