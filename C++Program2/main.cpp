// Thomas Martinez
// HW2-Martinez

#include <iostream>
#include <string>
using namespace std;


// Calling local variables
int studentID = 1;
double grade1 = 100;
double grade2 = 100;
double grade3 = 100;
double grade4 = 100;

int studentID2 = 2;
double grade1_2 = 100;
double grade2_2 = 0;
double grade3_2 = 100;
double grade4_2 = 0;

int studentID3 = 3;
double grade1_3 = 82;
double grade2_3 = 94;
double grade3_3 = 73;
double grade4_3 = 86;

int studentID4 = 4;
double grade1_4 = 64;
double grade2_4 = 74;
double grade3_4 = 84;
double grade4_4 = 94;

int studentID5 = 5;
double grade1_5 = 94;
double grade2_5 = 84;
double grade3_5 = 74;
double grade4_5 = 64;


int main() {

	// Outputting a grid like system 
	cout << "Student| Grade 1| Grade 2| Grade 3| Grade 4| Average Grade 1| Average Grade 2" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;

	// Declaring the Array along with giving the methodiology to get averages
	double classStudent[60][7] = { { studentID, grade1, grade2, grade3, grade4, (grade1 + grade2 + grade3 + grade4) / 4, (0.2*grade1) + (0.3*grade2) + (0.3*grade3) + (0.2*grade4) },
	{ studentID2, grade1_2, grade2_2, grade3_2, grade4_2, (grade1_2 + grade2_2 + grade3_2 + grade4_2) / 4, (0.2*grade1_2) + (0.3*grade2_2) + (0.3*grade3_2) + (0.2*grade4_2) },
	{ studentID3, grade1_3, grade2_3, grade3_3, grade4_3, (grade1_3 + grade2_3 + grade3_3 + grade4_3) / 4, (0.2*grade1_3) + (0.3*grade2_3) + (0.3*grade3_3) + (0.2*grade4_3) },
	{ studentID4, grade1_4, grade2_4, grade3_4, grade4_4, (grade1_4 + grade2_4 + grade3_4 + grade4_4) / 4, (0.2*grade1_4) + (0.3*grade2_4) + (0.3*grade3_4) + (0.2*grade4_4) },
	{ studentID5, grade1_5, grade2_5, grade3_5, grade4_5, (grade1_5 + grade2_5 + grade3_5 + grade4_5) / 4, (0.2*grade1_5) + (0.3*grade2_5) + (0.3*grade3_5) + (0.2*grade4_5) } };

	// This gives the array conditions to output its row and column accordingly
	for (int row = 0; row < 60; row++) {
		for (int column = 0; column < 7; column++) {
			cout << classStudent[row][column] << " ";
		}
		cout << endl;
	}

	// This takes the overall average 1 of the class 
	double average1 = classStudent[0][5];
	double average2 = classStudent[1][5];
	double average3 = classStudent[2][5];
	double average4 = classStudent[3][5];
	double average5 = classStudent[4][5];

	double overallAverage1 = (average1 + average2 + average3 + average4 + average5) / 5;

	// This takes the overall average 2 of the class 
	double average1_2 = classStudent[0][6];
	double average2_2 = classStudent[1][6];
	double average3_2 = classStudent[2][6];
	double average4_2 = classStudent[3][6];
	double average5_2 = classStudent[4][6];

	double overallAverage2 = (average1_2 + average2_2 + average3_2 + average4_2 + average5_2) / 5;

	// Outputs the printed statement giving you the class overall averages
	cout << " The overall class average grade 1 is " << overallAverage1 << endl;
	cout << " The overall class average grade 2 is " << overallAverage2 << endl;

	// Pauses system
	system("PAUSE");

	return 0;
}