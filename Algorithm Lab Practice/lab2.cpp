#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("in.txt", "w", stdout);
    freopen("out1.txt", "r", stdin);
 
    int n;
    cin >> n;
 
    int arr[n + 1];
 
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    // Selection sort
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
 
    for (int i = 1; i <= n; i++) {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}