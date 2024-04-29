#include <bits/stdc++.h>
using namespace std;

void createSieve(bool sieve[],int n)
{
    for (int i = 0; i <= n; i++)
    {
        sieve[i] = true;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                sieve[j] = false;
            }
        }
    }
}
vector<int> storePrime(bool sieve[],int n)
{
    vector<int> prime;
    for (int i = 2; i < n; i++)
    {
        if (sieve[i] == true)
        {
            prime.push_back(i);
        }
    }
    return prime;
}

int main(){
    int n =1000000;
    bool sieve[n+1];
    createSieve(sieve,n);
    int l, r;
    cin >> l >> r;
    // step 1: generate all prime numbers till square root of n
    vector<int> prime = storePrime(sieve,sqrt(n));
    // step 2: create a dummy array l-r+1 and make everyone at 1
    int dummy[r - l + 1];
    for (int i = 0; i < r - l + 1; i++)
    {
        dummy[i] = 1;
    }
    for (auto pr : prime)
    {
        int firstmultiple = (l / pr) * pr;
        if (firstmultiple < l)
            firstmultiple += pr;
        for (int j = max(firstmultiple, pr * pr); j <= r; j = j + pr)
        {
            dummy[j - l] = 0;
        }
    }
    // step 4: get all the prime numbers
    for (int i = l; i <= r; i++)
    {
        if(dummy[i-l]==true){
            cout<<i<<" ";
        }
    }
    cout << endl;
}