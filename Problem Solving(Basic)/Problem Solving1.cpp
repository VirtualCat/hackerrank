#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int n, max = 0, temp = 0, l = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    /*for(int i =0; i < n; i++){
        cout << a[i] << endl;
    }*/
    //check(a,n);
    
    if(n == 1){
        cout << "error" << endl;   
    }
    
    for(int i = 0; i < n; i ++){
    	temp = a[i];
        for(int j = i+1; j < n; j++){
            if(abs(a[i]-a[j]) == 0 || abs(a[i]-a[j]) == 1){
                l++;
                if(l==1){
                	max++;
				}
				else{
					if(abs(temp-a[i]) <= 1){
						max++;
					}
					else{
						max--;
					}
				}
            }
            else{
            	i++;
            	j++;
			}
        }
    }
    cout << max << endl;
}
