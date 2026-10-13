#include<iostream>
using namespace std;
int main()
{
    int numGrades;     // how many total grades
    int grade;      // individual grades
    double total = 0;

    int highest;
    int lowest;

    cout << "How many grades do you have? ";
    cin >> numGrades;


    while(numGrades <= 0)
    {
        cout << "Invalid!!" << endl;
        cout << "Enter a number greater than 0: ";
        cin >> numGrades;
    }

    for(int i = 0; i < numGrades; i++)
    {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;
        while(grade <= 0 || grade >= 100)
        {
            cout << "Invalid!!" << endl;
            cout << "Enter a valid grade: ";
            cin >> grade;
        }
        if(i == 0)
        {
            highest = grade;
            lowest = grade;
        }
        if(grade >= highest)
        {
            highest = grade;
        }
        if(grade <= lowest)
        {
            lowest = grade;
        }
        total += grade;
    }
    
    double average;

    average = total / numGrades;

    cout << "Your average grade is: " << average << endl;
    
    cout << "Your highest grade is: " << highest << endl;
    cout << "Your lowest grade is: " << lowest << endl;
    
    return 0;
}