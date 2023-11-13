#include <iostream>

using namespace std;

int main() {

const int STUDENT_COUNT = 5; 
double studentGrades[STUDENT_COUNT]; // declare an array (studentGrades)

for (int i = 0; i < STUDENT_COUNT; ++i) { // up to 5
    cout << "What is the grade for student" << i + 1 << "?" << endl;
    cin >> studentGrades[i];
}

float sumGrades = 0; // declare a variable & set to 0
for (int i = 0; i < STUDENT_COUNT; ++i) { // creates a loop
    sumGrades += studentGrades[i];
}

const float maxNumber = 500;
float numberScore = (sumGrades/maxNumber)*100;

const int gradeCount = 5;
const float gradeThresholds[gradeCount] = {90,80,70,60,0};

const char * grades[gradeCount] = {"A", "B", "C","D", "Fail"};

string finalGrade = "";
    for (int i = 0; i < gradeCount; ++i) {
        if (numberScore >= gradeThresholds[i]) {
            finalGrade = grades[i];
            break;
        }
    }

    cout << "The student's overall exam grade is " << finalGrade << " Score: " << numberScore << "%";
    return 0;

}