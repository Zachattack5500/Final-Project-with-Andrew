#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct Question
{
	string question = "Who let the dogs out?";
	string answer1 = "Who";
	string answer2 = "Who?";
	string anwer3 = "Who!";
	string answer4 = "Who?!";
};

int main()
{
	Question one;
	cout << one.question << endl << one.answer1 << endl << one.answer2 << endl << one.anwer3 << endl << one.answer4;
	return 0;
}

