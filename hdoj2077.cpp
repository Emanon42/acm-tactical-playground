#include<iostream>
#include<math.h>

using namespace std;

long long tableH3[20];
long long tableStep1[20];
long long table[20];



int main(){

	tableH3[0] = 0;
	tableH3[1] = 2;
	for(int i = 2; i <= 20; ++i){
		tableH3[i] = 3 * tableH3[i - 1] + 2;
	}
	tableStep1[0] = 0;
	tableStep1[1] = 1;
	for(int i = 2; i <= 20; ++i){
		tableStep1[i] = tableH3[i - 1] + tableStep1[i - 1] + 1;
	}
	table[0] = 0;
	table[1] = 2;
	for(int i = 2; i <= 20; ++i){
		table[i] = 2 * tableStep1[i - 1] + 2;
		//cout << "address of i:" << &i << endl; 
		//cout << "address of table[i]:" << &table[i] << endl; 
	}
	int plates = 0;
	//cout << "ready" << endl;
	while(cin >> plates){
		cout << table[plates] << endl;
	}
	return 0;
}
