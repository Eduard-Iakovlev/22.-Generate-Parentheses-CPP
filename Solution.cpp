#include "Solution.h"

vector<string> Solution::generateParenthesis(int n){
	vector<string> result{};
	if (n == 0) return result;
	string s = "";
	dfs(result, s, n, n);
	return result;
}

void Solution::dfs(vector<string>& result, string s, int left, int right) {
	if (left > right) return;
	if (left == 0 && right == 0) {
		result.push_back(s);
		return;
	}
	if (left > 0) {
		dfs(result, s + "(", left - 1, right);
	}
	if (right > 0) {
		dfs(result, s + ")", left, right - 1);
	}
}
