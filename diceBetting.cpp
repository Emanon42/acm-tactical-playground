#include<vector>
#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

//概率dp入门：注意点：如何表达当前状态的来历，如：扔3得2由扔2得2和扔2得1组合得来
//之后画图列递推式 

int main(){
	int n, s, k = 0;
	cin >> n >> s >> k;
	cout << "times of rolling = " << n << " sides of dices = " << s << " required distinct nums = " << k << endl;
	//vector<vector<double> > dp(n+1, vector<double>(k+1, 0.0));
	//dp[1][1] = 1.0;
	//cout << solve(dp, n+1, k+1, n, k, s) << endl;
	double dp[n + 1][n + 1] = {0.0};
	dp[1][1] = 1.0;
	//dp[n][k] = dp[n-1][k]*(k/s) + dp[n-1][k-1]*(1-k/s)
	for(int i = 1; i < n; ++i){
		for(int j = 1; j < i + 1; ++j){
			dp[i+1][j] += dp[i][j] * ((double)j/s);
			dp[i+1][j+1] += dp[i][j] * (1 - (double)j/s);
		}
	}
	for(int i = 0; i < n+1; ++i){
		for(int j = 0; j < n+1; ++j){
			cout <<setiosflags(ios::fixed);
			cout << setprecision(7) << dp[i][j] << "    ";
		}
		cout << endl;
	}
	double result = 0.0;
	for(int i = k; i < n + 1; ++i){
		//cout << dp[n][i] << endl;
		result += dp[n][i];
	}
	cout << result << endl;

	
	
	return 0;
}
