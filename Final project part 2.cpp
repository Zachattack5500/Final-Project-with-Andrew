#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

struct Question
{
	string question = "Who let the dogs out?";
	string answer1 = "A: Who";
	string answer2 = "B: Who?";
	string anwer3 = "C: Who!";
	string answer4 = "D: Who?!";
	};

int main()
{
	int array [10];
	char choice;

	srand(time(0)); // random number generator
	int a[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	random_shuffle(&a[0], &a[15]);

	for (unsigned i = 0; i < 15; i++)
	{
		cout << a[i] << "   ";
	}
	cout << endl;


	Question one;
	cout << one.question << endl << one.answer1 << endl << one.answer2 << endl << one.anwer3 << endl << one.answer4 << endl;
	
	while ((array[0] >2 )||(array[0] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is D." << endl; array[0] = 0;
			break;
		case 'B': cout << "The right answer is D." << endl; array[0] = 0;
			break;
		case 'C': cout << "The right answer is D." << endl; array[0] = 0;
			break;
		case 'D': cout << "Congradulations, you answered right." << endl; array[0] = 1;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}
	cout << array[0] << endl << endl;
	
	int total =0;
	for (int x =0; x<15; x++)
	{
		total += array [10];
	}
	cout << total << endl;
		return 0;
}