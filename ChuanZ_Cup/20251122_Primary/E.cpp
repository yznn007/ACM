#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;cin >> n;
    vector<vector<int>> arr(n,vector<int>(2,0));
    for(int i = 0;i<n;i++)
        for(int j = 0;j<2;j++)
        { 
            cin >> arr[i][j];
            cout << arr[i][j] << " ";
        }
        // cout << endl;
    int q;cin >> q;
    vector<int> no(q,0);
    for(auto& it: no) cin >> it;
    
    // for(int i = 0;i<n-1;i++)
    //     for(int j = i+1;j<n;j++)
    //     { 
            
    //         if(arr[i][0] >= arr[j][0])
    //         {
    //             int temp1 = arr[i][0];
    //             int temp2 = arr[i][1];
    //             arr[i][0] = arr[j][0];
    //             arr[j][0] = temp1;
    //             arr[i][1] = arr[j][1];
    //             arr[j][1] = temp2;
    //         }
    //     }

    for(int i = 0;i<n;i++)
        for(int j = 0;j<2;j++)
        { 
           
            cout << arr[i][j] << " ";
        }
        // cout << endl;
        // cout << endl;
    
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