#include <iostream>
#include <iomanip>
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