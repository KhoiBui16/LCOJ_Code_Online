#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    long n;
    cin >> n;
    
    long left = 1, right = n, res = 0;
    while (left <= right)
    {
        long mid = (left + right) / 2;
        long sum = mid * (mid + 1) / 2;
        if (sum <= n)
        {
            res = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << res;
    return 0;
}