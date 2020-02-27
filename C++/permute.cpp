#include<bits/stdc++.h>
using namespace std;
#define loi long long

//loi dp[100001];

loi num_ways(loi n, loi primary[], string s)
{
    if(n < 0)
    {
        return 0;
    }
    if(n == 0)
    {
        cout << s << "\n";
        return 1;
    }
    
    loi ans = 0;

    for(loi i = 0; i < 3; i++)
    {
        if(n >= primary[i])
        {
            //cout << "jab n :" << n << " tab accept hua :" << primary[i] << "\n";
            char ch;
            if(primary[i] == 1) ch = '1';
            if(primary[i] == 4) ch = '4';
            if(primary[i] == 6) ch = '6';
            ans += num_ways(n - primary[i], primary, s + ch);
        }
    }
    return ans;
}

int main()
{
    //loi primary[3] = {1, 4, 6};
    loi ans[100001];
    memset(ans, 0, sizeof(ans));
    ans[1] = 0;
    ans[2] = 1;
    ans[3] = 1;
    ans[4] = 1;
    ans[5] = 3;
    ans[6] = 4;
    ans[7] = 7;
    ans[8] = 10;
    ans[9] = 14;
    ans[10] = 21;
    ans[11] = 31;
    ans[12] = 46;
    ans[13] = 67;
    
    for(loi i = 14; i < 100001; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 4] + ans[i - 6];
        ans[i] %= 1000000007;
    }
    
    loi t;
    cin >> t;

    while(t--)
    {
        loi n;
        cin >> n;
        cout << ans[n] << "\n";
    }
    return 0;
}
