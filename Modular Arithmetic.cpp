//calculate mod of n!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1000, mod = 1e9+7;
    int ans = 1;
    for(int i = 1; i<=n ; i++)
        ans = (ans*i)%mod;
    cout<<ans<<endl;
}
