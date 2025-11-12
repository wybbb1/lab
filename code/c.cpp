#include <iostream>
#define MAX 100005
#define i64 long long
#define endl "\n"
using namespace std;

void solve(){
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; ++i) cin >> a[i];

    for (int i=0; i<n-1; ++i){
        int minnum = a[i];
        int index = i;
        for (int j=i+1; j<n; ++j){
            if (a[j] < minnum){
                index = j;
                minnum = a[j];
            }
        }
        swap(a[index], a[i]);
        for (int k=0; k<n; ++k){
            if (k == n-1) cout << a[k] << endl;
            else cout << a[k] << ' ';
        }
    }
}

int main()
{
    int _=1;
    cin >> _;
    while (_--){
        solve();
        cout << endl;
    }
    return 0;
}