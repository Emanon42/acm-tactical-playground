#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int m, n;
    float sum = 0;
    while(cin >> m && m != 0){
        for(int i = 0; i < m; ++i){
            cin >> n; 
            sum = 0;
            for(int j = 1; j <= n; ++j){
                sum += pow(-1,j+1) * 1 / j;
            }
            cout << fixed << setprecision(2) << sum << endl;
        }
    }
}
