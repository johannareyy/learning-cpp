#include <iostream>
using namespace std;

int main() {
    double finalGrade;
    cout << "Enter the final grade: " << endl;
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Is he/she well-behavior? ";
    cin >> goodBehavior;

    bool goodStudent = finalGrade >= 9 && goodBehavior;
    bool averageStudent = finalGrade >= 9 != goodBehavior; //ou exclusivo ^ ou !=
    bool badStudent = finalGrade <= 3 && !goodBehavior;
    bool loanCancelled = finalGrade <= 3 || !goodBehavior;

    cout << "Good student? " << goodStudent << endl;
    cout << "Average Student? " << averageStudent << endl;
    cout << "Bad Student? " << badStudent << endl;
    cout << "Will the loan be canceled? " << loanCancelled << endl;

    return 0;
}