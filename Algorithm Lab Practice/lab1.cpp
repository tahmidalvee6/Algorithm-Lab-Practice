#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("in1.txt", "r", stdin);

    int n1, n2, n3;

    // First file
    cin>>n1;
    freopen("out1.txt", "w", stdout);
    for (int i = 0; i < n1; i++) {
        cout << rand() % 5000 << endl;
    }

    // Second file
    cin>>n2;
    freopen("out2.txt", "w", stdout);
    for (int i = 0; i < n2; i++) {
        cout<<rand() % 5000<<endl;
    }

    // Third file
    cin >> n3;
    freopen("out3.txt", "w", stdout);
    for (int i = 0; i < n3; i++) {
        cout<<rand() % 5000<<endl;
    }
}
