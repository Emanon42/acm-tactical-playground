#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

struct tvShow{
	int start;
	int end;
};

bool sortByEnd(tvShow &a, tvShow &b){
	return a.end < b.end;
}


void printVector(vector<tvShow> &vec)
{
    for(vector<tvShow>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout<<it->start<<'\t'<<it->end<<endl;
    }
}


int main(){
	//freopen("input.txt", "r", stdin);
	int n, s, e = 0;
	int result = 1;
	while(cin >> n && n){
		vector<tvShow> tvShows;
		tvShows.reserve(n);
		for(int i = 0; i < n; ++i){
			cin >> s && cin >> e;
			tvShow t = {s, e};
			tvShows.push_back(t);
		}
		sort(tvShows.begin(), tvShows.end(), sortByEnd);
		//printVector(tvShows);
		
		for(int i = 0, j = 1; j < n; ++j){
			if(tvShows[i].end <= tvShows[j].start){
				i = j;
				++result;
			}
		}
		cout << result << endl;
		tvShows.clear();
		result = 1;
	}
	return 0;
}
