#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    stack<char> stk;
    vector<int> num1(20001,0);
    vector<int> num2(20001,0);
    vector<int> num3(20001,0);
    int count = 0;
    string s;cin >> s;
    int sum = 0;
    for(auto it:s) stk.push(it);
    
    stk.pop();
    num3[0] = stk.top()-48;
    stk.pop();
    if(stk.top() == '-') num3[0] -= 2*num3[0];
    stk.pop();
    num2[0] = 1;
    while(!stk.empty())
    {
        
        if(stk.top()>='0' && stk.top()<='9')
        {
            count++;
            num1[count] = (stk.top()-48 )%10007;
            stk.pop();
            if(stk.top() == '-') (num1[count] -= 2*num1[count]) % 10007;
            num2[count] = (num2[count-1] * num1[count] + num3[count-1])%10007;
            num3[count] = (num1[count] * num3[count-1] ) %10007;
        }
        else stk.pop();
    }
    // cout << num1[count]<< " " << num2[count]<< " " << num3[count] <<endl;
    
    
    
    
    // cout << count <<endl;
    int result = (num2[count])%10007;
    cout << result <<endl;
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

