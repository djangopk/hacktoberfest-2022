#include<bits/stdc++.h>
// #define DEBUG
using namespace std;
#define int long long
const int N = 2e5+5;
const int mod = 1e9+7;
int phi[N];
// for a prime number euler totient function has value n-1 as all number having value less than it will be coprime
// for a composite number euler totient function will apply on all the prime factors of the composite number. This will 
// result in the formula - If the number is n , n * (factor-1)/(factor) for one factor. So we will use sieve for 
// prime factorization to calculate efficiently the euler totient function value
void euler_totient_function()
{
    for(int i=0 ; i<=N ; i++) phi[i] = i; // initializing all values as the final values is n * (some_value)

    for(int i=2 ; i*i<=N ; i++) // implementation of sieve
    {
        if(phi[i] == i)
        {
        for(int j=i*i ; j<=N ; j+=i) // all the integers j will be factors of i as j is initialized with square of i
        {
            phi[j] *= (i-1); // multiplying with factor-1
            phi[j] /= i; // dividing by factor as stated above
        }
        }
    }
}
main()
{
    // when the queries get too large we need to do precompute that's what is being implemented using sieve
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    euler_totient_function();
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<phi[n]<<"\n";
    }
}