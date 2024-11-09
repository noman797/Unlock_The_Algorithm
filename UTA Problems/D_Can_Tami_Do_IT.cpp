#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, p;
    cin >> t >> p;
    vector<int> a(t);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end(), greater<int>());

    int d = 0;
    for (int i = 0; i < t and p > 0; i++)
    {
        while(a[i]<=p)
        {
            p -= (p / a[i]) * a[i];
            d++;
        }
    }

    if (d == 1)
        cout << "Tami will be back after " << d << " day" << endl;
    else
        cout << "Tami will be back after " << d << " days" << endl;

    return 0;
}
