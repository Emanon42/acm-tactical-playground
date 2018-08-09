#include<iostream>

using namespace std;

int main(){
	long long hep = 1;
	long long lep = 0;
	int time = 0;
	while(cin >> time && time != (-1)){
		for(int i = 0; i < time; ++i){
			long long nextHep = hep * 3 + lep * 2;
			long long nextLep = hep + lep;
			hep = nextHep;
			lep = nextLep;
		}
		cout << hep << ", " << lep << endl;
		hep = 1;
		lep = 0;
	}
}
