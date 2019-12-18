#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, even(0), oi(0),ei(0);
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> temp;
        if (temp% 2 == 0)
        {
            even += 1;
            ei = i;
        }
        else
        {
            even -= 1;
            oi= i;
        }
    }

    cout << (even > 0 ? oi : ei) << endl;

    return 0;
}