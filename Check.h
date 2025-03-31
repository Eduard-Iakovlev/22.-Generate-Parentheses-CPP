#pragma once
#include <vector>
#include <string>

using namespace std;

class Check{
public:
	Check() = default;
	bool checkSolution(vector<string> expected, vector<string> result);
};

