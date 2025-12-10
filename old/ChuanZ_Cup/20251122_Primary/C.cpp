#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n,m,x,y;cin >> n >> m >> x >> y;
    vector<int> arr(2*pow(10,5)+1,0);
    int temp;
    int count_x = x,count_y = n-y+1;
    for(int i = 0;i<m;i++) 
    {
        cin >> temp;
        arr[temp] ++;

        if(temp<=x)
        {
            if(arr[temp] % 2) count_x--;
            else count_x++;  
        }
        if(temp>=y)
        {
            if(arr[temp] % 2) count_y--;
            else count_y++;  
        }
        cout << count_x << " " << count_y <<endl;
    }
}

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}