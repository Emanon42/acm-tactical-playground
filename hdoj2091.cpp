#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	char inputChar = ' ';
	int n, initFlag = 0;
	while(cin >> inputChar && inputChar != '@' && cin >> n){
		if(initFlag != 0){
			cout << endl;
		}
		

		for(int i = 0; i < n - 1; ++i){
			cout << " ";
		}
		cout << inputChar;
		
		if(n > 1){
			cout << endl;
			for(int i = 0; i < n - 2; ++i){
				for(int j = 1; j <= n + i + 1; ++j){
					if((j == n - i - 1) || (j == n + i + 1)) {
						cout << inputChar;
					} else{
						cout << " ";	
					}
				}
				cout << endl;
			}
			for(int i = 0; i < 2 * n - 1; ++i){
				cout << inputChar;
			}
			cout << endl;
		}
		
		++initFlag;
	}
	//freopen("output.txt","w",stdout);
	return 0;
}
