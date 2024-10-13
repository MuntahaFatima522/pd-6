#include<iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialSciences, float marksBiology);
string calculateGrade(float average);

int main()
{
    string name;
    float marksEnglish,marksMaths,marksChemistry,marksSocialSciences,marksBiology;
    float average;
    string grade;

    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for english: ";
    cin>>marksEnglish;
    cout<<"Enter marks for maths: ";
    cin>>marksMaths;
    cout<<"Enter marks for chemistry: ";
    cin>>marksChemistry;
    cout<<"Enter marks for social sciences: ";
    cin>>marksSocialSciences;
    cout<<"Enter marks for biology: ";
    cin>>marksBiology;
    average=calculateAverage(marksEnglish,marksMaths,marksChemistry,marksSocialSciences,marksBiology);
    grade=calculateGrade(average);
    cout<<"Student Name: "<<name<<endl;
    cout<<"Percentage: "<<average<<endl;
    cout<<"Grade: "<<grade;
    
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialSciences, float marksBiology)
{
    float average;
    average=(marksEnglish+marksMaths+marksChemistry+marksSocialSciences+marksBiology)/5.0;
    return average;
}

string calculateGrade(float average)
{
    string grade;
    float percentage;
    float totalMarks=500.0;
    percentage=average;
    if(percentage>=90 && percentage<=100)
    {
        grade="A+";
    }
    else if(percentage>=80 && percentage<90)
    {
        grade="A";
    }
    else if(percentage>=70 && percentage<80)
    {
        grade="B+";
    }
    else if(percentage>=60 && percentage<70)
    {
        grade="B";
    }
    else if(percentage>=50 && percentage<60)
    {
        grade="C";
    }
    else if(percentage>=40 && percentage<50)
    {
        grade="D";
    }
    else
    {
        grade="F";
    }
    return grade;
}