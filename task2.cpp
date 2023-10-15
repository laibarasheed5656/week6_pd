#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

int main()
{
    string name, grade;
    float average;
    int m1, m2, m3, m4, m5;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> m1;
    cout << "Enter marks for Maths: ";
    cin >> m2;
    cout << "Enter marks for Chemistry: ";
    cin >> m3;
    cout << "Enter marks for Social Science: ";
    cin >> m4;
    cout << "Enter marks for Biology: ";
    cin >> m5;

    average = calculateAverage(m1, m2, m3, m4, m5);
    grade = calculateGrade(average);

    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float obtainedmarks = (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 500.0 * 100;
    return obtainedmarks;
}

string calculateGrade(float average)
{
    string grade;
    if (average >= 90 && average <= 100)
        grade = "A+";
    else if (average >= 80)
        grade = "A";
    else if (average >= 70)
        grade = "B+";
    else if (average >= 60)
        grade = "B";
    else if (average >= 50)
        grade = "C";
    else if (average >= 40)
        grade = "D";
    else
        grade = "F";
    return grade;
}
