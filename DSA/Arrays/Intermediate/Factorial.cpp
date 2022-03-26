//https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true
void extraLongFactorials(int n)
{
    vector<int> ans;
    ans.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        //multiply i with the vector
        for (int j = 0; j < ans.size(); j++)
        {
            int val = ans[j] * i + carry;
            ans[j] = val % 10;
            carry = val / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}