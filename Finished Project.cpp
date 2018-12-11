#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

struct Questiona
{
	string question = "The standard text height for all project work is ___________.";
	string answer1 = "A: 3/16 inch";
	string answer2 = "B: 1/4 inch";
	string answer3 = "C: 1/8 inch"; //correct answer
	string answer4 = "D: 3/32 inch";
};


struct Questionb
{
	string question = "What is the standard paper size for Construction Issue drawing sets?";
	string answer1 = "A: 34 X 22"; //correct answer
	string answer2 = "B: 17 X 11";
	string answer3 = "C: 22 X 17";
	string answer4 = "D: 44 X 34";
};

struct Questionc
{
	string question = "All Protection and Control drawings should be created in the AutoCAD Paperspace environment except for __________.";
	string answer1 = "A: One Line Diagrams";
	string answer2 = "B: Panel Layout & Wiring"; //correct answer
	string answer3 = "C: Schematics";
	string answer4 = "D: Wiring Diagrams";
};

struct Questiond
{
	string question = "The North Arrow should generally be located in the _________ of the drawing.";
	string answer1 = "A: lower left corner";
	string answer2 = "B: upper left corner";
	string answer3 = "C: lower right corner";
	string answer4 = "D: upper right corner"; //correct answer
};

struct Questione
{
	string question = "All physical, civil and structural drawings should be ___________. ";
	string answer1 = "A: drawn full size in model space and scaled through a view port"; //correct answer
	string answer2 = "B: drawn full size in paper space with the border scaled up";
	string answer3 = "C: drawn and scaled in model space to fit in a 1 to 1 viewport";
	string answer4 = "D: drawn in paper space and sclaed to fit in a 1 to 1 border";
};

struct Questionf
{
	string question = "What is the acceptable file format for raster image files?";
	string answer1 = "A: jpeg";
	string answer2 = "B: cit";
	string answer3 = "C: tif"; //correct answer
	string answer4 = "D: dwg";
};

struct Questiong
{
	string question = "Which stacked fraction does character code %%137 produce?";
	string answer1 = "A: 1/4";
	string answer2 = "B: 3/16"; //correct answer
	string answer3 = "C: 3/32";
	string answer4 = "D: 1/8";
};

struct Questionh
{
	string question = "For drawing markups, pick the example below that shows the approved colors and their funtions.";
	string answer1 = "A: additions - red, deletions - green, item has been reviewed - yellow, notes to drafter - magenta.";
	string answer2 = "B: additions - green, deletions - red, item has been reviewed - yellow, notes to drafter - blue.";
	string answer3 = "C: additions - green, deletions - red, item has been reviewed - orange, notes to drafter - blue.";
	string answer4 = "D: additions - red, deletions - green, item has been reviewed - yellow, notes to drafter - blue."; //correct answer
};

struct Questioni
{
	string question = "What is the scale factor for a 1 inch = 30 feet drawing?";
	string answer1 = "A: 360"; //correct answer
	string answer2 = "B: 96";
	string answer3 = "C: 4";
	string answer4 = "D: 600";
};

struct Questionj
{
	string question = "Which AutoCAD layer should be used for modelspace/paperspace viewports?";
	string answer1 = "A: 0 layer";
	string answer2 = "B: Text layer";
	string answer3 = "C: Dimension layer";
	string answer4 = "D: Defpoints layer"; //correct answer
};

struct Questionk
{
	string question = "The electrical discipline XREF file name should always have the file extension _________.";
	string answer1 = "A: .UXE";
	string answer2 = "B: .XE"; //correct answer
	string answer3 = "C: .XEC ";
	string answer4 = "D: .XC";
};

struct Questionl
{
	string question = "For drawing markups, pick the example below that shows the approved colors and their funtions.";
	string answer1 = "A: additions - red, deletions - green, item has been reviewed - yellow, notes to drafter - magenta.";
	string answer2 = "B: additions - green, deletions - red, item has been reviewed - yellow, notes to drafter - blue.";
	string answer3 = "C: additions - green, deletions - red, item has been reviewed - orange, notes to drafter - blue.";
	string answer4 = "D: additions - red, deletions - green, item has been reviewed - yellow, notes to drafter - blue."; //correct answer
};

struct Questionm
{
	string question = "Drawing units should be _________ with a minimum precision of ___________.";
	string answer1 = "A: metric, 5mm";
	string answer2 = "B: decimal, .0625";
	string answer3 = "C: architectural, 1/32"; //correct answer
	string answer4 = "D: survey feet, 1/16";
};

struct Questionn
{
	string question = "The text height factors for 1/8 inch = 1 foot is _________ and __________. ";
	string answer1 = "A: 0.75, 1"; //correct answer
	string answer2 = "B: 0.375, 0.5";
	string answer3 = "C: 1.5, 2";
	string answer4 = "D: 2.25, 3";
};

struct Questiono
{
	string question = "A drawing revision that has been issued for the first time will have the letter exstension _________.";
	string answer1 = "A: 1";
	string answer2 = "B: A";
	string answer3 = "C: Z";
	string answer4 = "D: B"; //correct answer
};

int main()
{
	int array[15];
	char choice;

	srand(time(0)); // random number generator
	int a[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	random_shuffle(&a[0], &a[15]);

	for (int x = 0; x < 15; x++)
	{
		array[x] = -2;
	}

	for (unsigned i = 0; i < 15; i++)
	{
		cout << a[i] << "   ";
	}
	cout << endl;


	Questiona one;
	cout << endl<< "This test is case sensitive. Try to get as many right as possible." <<endl << "Question One:" << endl;
	cout << one.question << endl << one.answer1 << endl << one.answer2 << endl << one.answer3 << endl << one.answer4 << endl;

	while ((array[0] > 2) || (array[0] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is C." << endl << endl; array[0] = 0;
			break;
		case 'B': cout << "The right answer is C." << endl << endl; array[0] = 0;
			break;
		case 'C': cout << "You chose right." << endl << endl; array[0] = 1;
			break;
		case 'D': cout << "The right answer is C." << endl << endl; array[0] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl << endl;
		}
	}


	Questionb two;
	cout << endl << "Question Two:" << endl;
	cout << two.question << endl << two.answer1 << endl << two.answer2 << endl << two.answer3 << endl << two.answer4 << endl;

	while ((array[1] > 2) || (array[1] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "You chose right." << endl; array[1] = 1;
			break;
		case 'B': cout << "The right answer is A." << endl; array[1] = 0;
			break;
		case 'C': cout << "The right answer is A." << endl; array[1] = 0;
			break;
		case 'D': cout << "The right answer is A." << endl; array[1] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questionc three;
	cout << endl << "Question Three:" << endl;
	cout << three.question << endl << three.answer1 << endl << three.answer2 << endl << three.answer3 << endl << three.answer4 << endl;

	while ((array[2] > 2) || (array[2] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is B." << endl; array[2] = 0;
			break;
		case 'B': cout << "You chose right" << endl; array[2] = 1;
			break;
		case 'C': cout << "The right answer is B." << endl; array[2] = 0;
			break;
		case 'D': cout << "The right answer is B." << endl; array[2] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questiond four;
	cout <<endl << "Question Four:" << endl;
	cout << four.question << endl << four.answer1 << endl << four.answer2 << endl << four.answer3 << endl << four.answer4 << endl;

	while ((array[3] > 2) || (array[3] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is D." << endl; array[3] = 0;
			break;
		case 'B': cout << "The right answer is D" << endl; array[3] = 0;
			break;
		case 'C': cout << "The right answer is D." << endl; array[3] = 0;
			break;
		case 'D': cout << "You chose right." << endl; array[3] = 1;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questione five;
	cout << endl << "Question Five:" << endl;
	cout << five.question << endl << five.answer1 << endl;
	cout << five.answer2 << endl<< five.answer3 << endl << five.answer4 << endl;

	while ((array[4] > 2) || (array[4] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "You chose right." << endl; array[4] = 1;
			break;
		case 'B': cout << "The right answer is A" << endl; array[4] = 0;
			break;
		case 'C': cout << "The right answer is A." << endl; array[4] = 0;
			break;
		case 'D': cout << "The right answer is A." << endl; array[4] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}
	cout << array[4] << endl << endl;

	Questionf six;
	cout << endl <<  "Question Six:" << endl;
	cout << six.question << endl << six.answer1 << endl;
	cout << six.answer2 << endl << six.answer3 << endl << six.answer4 << endl;

	while ((array[5] > 2) || (array[5] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is C." << endl; array[5] = 0;
			break;
		case 'B': cout << "The right answer is C" << endl; array[5] = 0;
			break;
		case 'C': cout << "You chose right." << endl; array[5] = 1;
			break;
		case 'D': cout << "The right answer is C." << endl; array[5] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questiong seven;
	cout << endl <<  "Question Seven:" << endl;
	cout << seven.question << endl << seven.answer1 << endl;
	cout << seven.answer2 << endl << seven.answer3 << endl << seven.answer4 << endl;

	while ((array[6] > 2) || (array[6] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is B." << endl; array[6] = 0;
			break;
		case 'B': cout << "You chose right" << endl; array[6] = 1;
			break;
		case 'C': cout << "The right answer is B." << endl; array[6] = 0;
			break;
		case 'D': cout << "The right answer is .B" << endl; array[6] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questionh eight;
	cout <<endl <<  "Question Eight:" << endl;
	cout << eight.question << endl << eight.answer1 << endl;
	cout << eight.answer2 << endl << eight.answer3 << endl << eight.answer4 << endl;

	while ((array[7] > 2) || (array[7] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is D." << endl; array[7] = 0;
			break;
		case 'B': cout << "The right answer is D" << endl; array[7] = 0;
			break;
		case 'C': cout << "The right answer is D." << endl; array[7] = 0;
			break;
		case 'D': cout << "You chose right." << endl; array[7] = 1;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questioni nine;
	cout << endl << "Question Nine:" << endl;
	cout << nine.question << endl << nine.answer1 << endl;
	cout << nine.answer2 << endl << nine.answer3 << endl << nine.answer4 << endl;

	while ((array[8] > 2) || (array[8] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "You chose right." << endl; array[8] = 1;
			break;
		case 'B': cout << "The right answer is A" << endl; array[8] = 0;
			break;
		case 'C': cout << "The right answer is A." << endl; array[8] = 0;
			break;
		case 'D': cout << "The right answer is A." << endl; array[8] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questionj ten;
	cout << endl<<  "Question ten:" << endl;
	cout << ten.question << endl << ten.answer1 << endl;
	cout << ten.answer2 << endl << ten.answer3 << endl << ten.answer4 << endl;

	while ((array[9] > 2) || (array[9] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is D." << endl; array[9] = 0;
			break;
		case 'B': cout << "The right answer is D" << endl; array[9] = 0;
			break;
		case 'C': cout << "The right answer is D." << endl; array[9] = 0;
			break;
		case 'D': cout << "You chose right." << endl; array[9] = 1;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questionk eleven;
	cout << endl << "Question Eleven:" << endl;
	cout << eleven.question << endl << eleven.answer1 << endl;
	cout << eleven.answer2 << endl << eleven.answer3 << endl << eleven.answer4 << endl;

	while ((array[10] > 2) || (array[10] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is B." << endl; array[10] = 0;
			break;
		case 'B': cout << "You chose right" << endl; array[10] = 1;
			break;
		case 'C': cout << "The right answer is B." << endl; array[10] = 0;
			break;
		case 'D': cout << "The right anwer is B." << endl; array[10] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questionl twelve;
	cout << endl << "Question Twelve" << endl;
	cout << twelve.question << endl << twelve.answer1 << endl;
	cout << twelve.answer2 << endl << twelve.answer3 << endl << twelve.answer4 << endl;

	while ((array[11] > 2) || (array[11] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is d." << endl; array[11] = 0;
			break;
		case 'B': cout << "The right answer is D." << endl; array[11] = 0;
			break;
		case 'C': cout << "The right answer is D." << endl; array[11] = 0;
			break;
		case 'D': cout << "You chose right." << endl; array[11] = 1;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questionm thirteen;
	cout << endl << "Question Thirteen:" << endl;
	cout << thirteen.question << endl << thirteen.answer1 << endl;
	cout << thirteen.answer2 << endl << thirteen.answer3 << endl << thirteen.answer4 << endl;

	while ((array[12] > 2) || (array[12] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is C" << endl; array[12] = 0;
			break;
		case 'B': cout << "The right answer is C." << endl; array[12] = 0;
			break;
		case 'C': cout << "You chose right." << endl; array[12] = 1;
			break;
		case 'D': cout << "The right anwer is C." << endl; array[12] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}
	
	Questionn fourteen;
	cout << endl << "Question Fourteen:" << endl;
	cout << fourteen.question << endl << fourteen.answer1 << endl;
	cout << fourteen.answer2 << endl << fourteen.answer3 << endl << fourteen.answer4 << endl;

	while ((array[13] > 2) || (array[13] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "You chose right." << endl; array[13] = 1;
			break;
		case 'B': cout << "The right answer is A" << endl; array[13] = 0;
			break;
		case 'C': cout << "The right answer is A." << endl; array[13] = 0;
			break;
		case 'D': cout << "The right anwer is A." << endl; array[13] = 0;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	Questiono fifteen;
	cout << endl << "Question Fifteen:" << endl;
	cout << fifteen.question << endl << fifteen.answer1 << endl;
	cout << fifteen.answer2 << endl << fifteen.answer3 << endl << fifteen.answer4 << endl;

	while ((array[14] > 2) || (array[14] < -1)) // answer for question that won't stop looping until valid answer is used
	{
		cin >> choice;
		switch (choice)
		{
		case 'A': cout << "The right answer is D." << endl; array[14] = 0;
			break;
		case 'B': cout << "The right answer is D." << endl; array[14] = 0;
			break;
		case 'C': cout << "The right answer is D." << endl; array[14] = 0;
			break;
		case 'D': cout << "You chose right." << endl; array[14] = 1;
			break;
		default: cout << "You didn't put in a valid answer." << endl;
		}
	}

	int sum = 0;
	for (int x = 0; x < 15; x++)
	{
		sum += array[x];
	}
	cout << "You got " << sum << "/" << "15 right.";
		return 0;
}
