#pragma once
#include <vector>
#include <string>

using namespace std;
class Output{
public:
	Output() = default;

	void setOutputData(int test, int n, vector<string> expected);

	void printСheck();
	void printVector(vector<string> vec);
	void printSolution();
private:
	int _test, _n;
	vector <string> _expected, _result;

	void setTest(int test);
	void setN(int n);
	void setExpected(vector<string> expected);
	void setResult();
};

