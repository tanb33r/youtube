#include <bits/stdc++.h>
using namespace std;
#define M 100000
vector<int> prime;
bitset<M> mark;

long long countDivisor(long long n) {
    long long divisor=1;
    for(int i=0; i<prime.size() && prime[i]<=sqrt(n); i++) {
        if(n % prime[i]==0) {
            int cnt = 0;
            while(n%prime[i]==0) {
                cnt++;
                n/=prime[i];
            }
            divisor *= cnt+1;
        }
    }
    if(n>1) divisor *= 2;
    return divisor;
}

void sieve() {
    for (int i = 2; i*i <= M; i++)
        if (mark[i] == false)  // i is a prime
            for (int j = i + i; j <= M; j += i )
                mark[j] = true;

    for (int i = 2; i <= M; i++)
        if (mark[i] == false)  // i is a prime
            prime.push_back(i);
}

int main() {
    sieve();
    int n;
    cin>>n;
    cout<<countDivisor(n);
}
