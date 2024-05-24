#include <iostream>
using namespace std;

int n, k;
int a[100];
int cnt  = 0;

void in() {
    for (int i  = 1; i <= k; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        a[i] = j;
        if (i == k) {
            in();
            cnt++;
        }
        else Try(i+1);
    }
}

int main() {
    cin >> n >> k;

    Try(1);
    cout << cnt;
    return 0;
}