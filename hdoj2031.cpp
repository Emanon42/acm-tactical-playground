#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    string str = "0123456789ABCDEF";
    int n, m = 0;
    while(cin >> n >> m){
        string s;
        if(n < 0){
        	cout << "-";
        	n = -n;
		}
        while(n){
            s.insert(s.begin(), str[n % m]);
            n /= m;
        }
        cout << s << endl;
    }
    return 0;
}
