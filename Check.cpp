#include "Check.h"

bool Check::checkSolution(vector<string> expected, vector<string> result){
	if (expected.size() != result.size()) return false;
	for (int i = 0; i < expected.size(); ++i) {
		for (int j = 0; j < expected[i].size(); ++j) {
			if (expected[i][j] != result[i][j]) return false;
		}
	}
	return true;
}
