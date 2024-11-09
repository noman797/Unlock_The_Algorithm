#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> aa(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        aa[i] = b;
    }

    sort(aa.begin(), aa.end());

    if (aa[0] + aa[1] + aa[2] < 150) {
        cout << "Counseling Support Required" << endl;
    } else {
        cout << "Counseling Support Not Required" << endl;
        cout << aa[0] << " " << aa[1] << " " << aa[2] << endl;
    }

    return 0;
}
