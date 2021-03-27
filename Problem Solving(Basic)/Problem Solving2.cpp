#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    
    int total = 0, c = 0;
    
    sort(a,a+n);
    
    for(int i = 0; i < n; i++){
        if(a[i]<= k){
            total++;
            k -= a[i];
        }
    }
    
    cout << total << endl;
}
