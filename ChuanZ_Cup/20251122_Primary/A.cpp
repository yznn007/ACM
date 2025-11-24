#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n,l;cin >> n >> l;
    vector<int> arr1(n,0);
    for(auto& it: arr1) cin >> it;
    sort(arr1.begin(),arr1.end());
    vector<int> arr2(n,0);
    arr2[0] = l;
    for(auto it = arr2.begin()+1;it<arr2.end();it++)  *it = *(it-1) + 1;

    for(int i = 0;i<n;i++)
    {
        if(i != n-1)
        {
            if(arr1[i]>arr2[i]) 
            {
                cout << arr2[i];
                return;
            }
        }
        else
        {
            if(arr1[i]>arr2[i]) 
            {
                cout << arr2[i];
                return;
            }
            else cout << arr2[i] + 1;      
        }
    }
}

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
