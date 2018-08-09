#include<iostream>
#include<math.h>

using namespace std;

//判断质数的方法，从2到sqrt(n)遍历而不是从1开始，因为1不是质数并且任何数对1取余都得0 

bool isPrime(int n){
	if (n == 1){
		return false;
	} else{
		for(int i = 2; i <= sqrt(n); ++i){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	int n = -1;
	while(cin >> n && n != 0){
		int result = 0;
		for(int i = 1; i <= n / 2; ++i){
			if(isPrime(i) && isPrime(n-i) && i != n / 2){
				++result;
			}
		}
		cout << result << endl;

	}
	
	return 0;
}
