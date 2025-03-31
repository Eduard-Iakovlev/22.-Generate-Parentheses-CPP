#pragma once
#include <vector>
#include <string>

using namespace std;

class Solution{
public:
	vector<string> generateParenthesis(int n);
private:
	void dfs(vector<string>& result, string s, int left, int right);
};

