#include<iostream>
#include<math.h>

using namespace std;

//�ж������ķ�������2��sqrt(n)���������Ǵ�1��ʼ����Ϊ1�������������κ�����1ȡ�඼��0 

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
