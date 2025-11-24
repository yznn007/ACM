#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int getSize(string s)
{
    int z = 1;
    int y = 0;
    int x = 0;
    while(x < s.size())
    {
        x+=z;
        y++;
        if(z++>=10) z = 1;  
        if(x > s.size()) y--;
    }
    return y;
}
void solve()
{
    string s;cin >> s;
    int size = getSize(s);
    vector<int> num(size,0);
    int count = 0;
    bool flag = true;
    while(1)
    {
        if(!flag) break;
        for(int i = 1;i <= 10;i++)
        {   
            if(s.size()<i)
            {
                flag = false;
                break;
            }
            int temp = i-1;
            for(int j = 0;j<i;j++)
            {
                num[count] += ((s[0]-48)*pow(2,temp--));
                s.erase(s.begin());
            }
            count++;
        }
    }
    cout << count <<endl;
    for(auto it : num) cout << it <<" ";
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