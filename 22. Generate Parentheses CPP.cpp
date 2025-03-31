#include <iostream>
#include <vector>
#include "Output.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "RUS");

    int test = 0;
    int n;
    vector<string> expected;

    Output output;

    test++;
    n = 3;
    expected = { "((()))", "(()())", "(())()", "()(())", "()()()" };
	output.setOutputData(test, n, expected);
    output.printSolution();

    test++;
    n = 1;
    expected = { "()" };
	output.setOutputData(test, n, expected);
    output.printSolution();



}
