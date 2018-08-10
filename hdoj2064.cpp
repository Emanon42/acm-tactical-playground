#include<iostream>

using namespace std;

long long move(int n, char start, char buffer, char end){
	if(n == 1){
		return 2;
	} else{
		long long num1 = move(n - 1, start, buffer, end);
		long long num2 = 1;
		long long num3 = move(n - 1, end, buffer, start);
		long long num4 = 1;
		long long num5 = move(n - 1, start, buffer, end);
		return num1 + num2 + num3 + num4 + num5;
	}
}

int main(){
	long long table[35];
	table[0] = 0;
	table[1] = 2;
	for(int i = 2; i <= 35; ++i){
		table[i] = 3 * table[i - 1] + 2;
	}
	int plates = 0;
	while(cin >> plates){
		cout << table[plates] << endl;
	}
	return 0;
}
