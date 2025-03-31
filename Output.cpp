#include "Output.h"
#include "Solution.h"
#include "Check.h"
#include <iostream>

using namespace std;

void Output::setOutputData(int test, int n, vector<string> expected){
	setTest(test);
	setN(n);
	setExpected(expected);
}

void Output::printСheck(){
	Check check;
	(check.checkSolution(_expected, _result)) ? cout << " Тест пройден" << endl : 
												cout << " Тест провален!!!" << endl;
}

void Output::printVector(vector<string> vec){
	cout << "[ ";
	for (auto& i : vec) {
		cout << "\"" << i << "\"";
		if (&i != &vec.back()) cout << ", ";
	}
	cout << " ]" << endl;
}

void Output::printSolution() {
	cout << "============ Тест № " << _test << " ============" << endl;
	cout << " Входные данные: n = " << _n << endl;
	cout << " Ожидаемый результат: ";
	printVector(_expected);
	cout << " Полученный результат: ";
	setResult();
	printVector(_result);
	cout << "============ Проверка ============" << endl;
	printСheck();
	cout << "==================================\n" << endl;
}

void Output::setTest(int test){
	_test = test;
}

void Output::setN(int n){
	_n = n;
}

void Output::setExpected(vector<string> expected){
	_expected = expected;
}

void Output::setResult(){
	Solution solution;
	_result = solution.generateParenthesis(_n);
}
