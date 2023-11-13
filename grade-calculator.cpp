/* #include <iostream>
#include <cmath>

using namespace std;

int main(){

    double studGrade1;
    double studGrade2;
    double studGrade3;
    double studGrade4;
    double studGrade5;
    
    cout << "What is the 1st student grade?" << endl;
    cin >> studGrade1;
    cout << "What is the 2nd student grade?" << endl;
    cin >> studGrade2;
    cout << "What is the 3rd student grade?" << endl; 
    cin >> studGrade3;
    cout << "What is the 4th student grade?" << endl;
    cin >> studGrade4;
    cout << "What is the 5th student grade?" << endl;
    cin >> studGrade5;

    float maxNumber = 500;
    float sumGrades = studGrade1 + studGrade2 + studGrade3 + studGrade4 + studGrade5;
    float numberScore = (sumGrades/maxNumber)*100;
  
   

    if (numberScore >= 90){
        cout << "Their grade is A" << numberScore << endl;
    }
    else if  (numberScore >=80){
        cout << "Their grade is B" << numberScore << endl;
    }
    else if (numberScore >=70) {
        cout << "Their grade is C" << numberScore << endl;
    } 
    else if (numberScore >=60) {
        cout << "Their grade is D" << numberScore << endl;
    }
     else {
        cout << "They failed" << numberScore << endl;
     }
 

    return 0;


} */