#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> prime;
bool isPrime[3030];

void seive()
{
    for (int i = 2; i <= 1000; i++)
    {
        if (isPrime[i])
            continue;
        prime.push_back(i);
        for (int j = i + i; j <= 1000; j += i)
        {
            isPrime[j] = true;
        }
    }
}

void test_case()
{
    seive();
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i < prime.size(); i++)
    {
        if (prime[i] > n)
            break;
        for (int j = 0; j < i - 1; j++)
        {
            if (prime[j] + prime[j + 1] + 1 == prime[i])
                cnt++;
        }
    }
    if (cnt >= k)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
}

int main(){
    int t = 1;
    while (t--){
        test_case();
    }
    return 0;
}