#include<iostream>
#include<string.h>
using namespace std;

string checkStudentStatus(int startHours,int startMinutes,int arrivalHours,int arrivalMinutes);

int main()
{
    int startHours,startMinutes,arrivalHours,arrivalMinutes;
    string result;
    cout<<"Enter Exam starting time(hour): ";
    cin>>startHours;
    cout<<"Enter Exam starting time(minutes): ";
    cin>>startMinutes;
    cout<<"Enter Student hour of arrival: ";
    cin>>arrivalHours;
    cout<<"Enter Student minutes of arrival: ";
    cin>>arrivalMinutes;
    result=checkStudentStatus(startHours,startMinutes,arrivalHours,arrivalMinutes);
    cout<<result;
}

string checkStudentStatus(int startHours,int startMinutes,int arrivalHours,int arrivalMinutes)
{
    string result;
    int hours,minutes;
    if(startHours>arrivalHours) 
    {
        if(startMinutes>=arrivalMinutes)
        {
            hours=startHours-arrivalHours;
            minutes=startMinutes-arrivalMinutes;
            result="Early\n"+to_string(hours)+":"+to_string(minutes)+" hours before the start";
        }
        else
        {
            hours=startHours-arrivalHours;
            hours=hours-1;
            minutes=arrivalMinutes-startMinutes;
            minutes=60-minutes;
            if (hours==0)
            {
                if(minutes>30)
                {
                    result="Early\n"+to_string(minutes)+" minutes before the start";
                }
                else
                {
                     result="On time\n"+to_string(minutes)+" minutes before the start";
                }
            }
            else
            {
                result="Early\n"+to_string(hours)+":"+to_string(minutes)+" hours before the start";
            }
        }
    }
    else if(startHours==arrivalHours) 
    {
        if(startMinutes==arrivalMinutes)
        {
            result="On time";
        }
        else if(startMinutes>arrivalMinutes)
        {
            minutes=startMinutes-arrivalMinutes;
            if(minutes>30)
            {
                result="Early\n"+to_string(minutes)+" minutes before the start";
            }
            else
            {
                 result="On time\n"+to_string(minutes)+" minutes before the start";
            }
        }
        else if(startMinutes<arrivalMinutes)
        {
            minutes=arrivalMinutes-startMinutes;
            result="Late\n"+to_string(minutes)+" minutes after the start";
        }
    }
    else
    {
        if(startMinutes<arrivalMinutes)
        {
            hours=arrivalHours-startHours;
            minutes=arrivalMinutes-startMinutes;
            result="Late\n"+to_string(hours)+":"+to_string(minutes)+" hours late after the start";
        }
        else if(startMinutes==arrivalMinutes)
        {
            hours=arrivalHours-startHours;
            result="Late\n"+to_string(hours)+" hours late after the start";
        }
        else
        {
            hours=arrivalHours-startHours;
            hours=hours-1;
            minutes=startMinutes-arrivalMinutes;
            minutes=60-minutes;
            if(hours==0)
            {
                result="Late\n"+to_string(minutes)+" minutes after the start";
            }
            else
            {
                result="Late\n"+to_string(hours)+":"+to_string(minutes)+" hours late after the start";
            }
        }
    }
    return result;
}