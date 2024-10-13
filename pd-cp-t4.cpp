#include<iostream>
using namespace std;

float calculateBill(char code,char time,int minutes);

int main()
{
    char code,time;
    int minutes;
    float finalBill;
    cout<<"Enter the service code(R/r for regular,P/p for premium): ";
    cin>>code;

     if(code=='P' || code=='p')
     {
        cout<<"Enter the time of the call(D/d for day,N/n for night): ";
        cin>>time;
     }

    cout<<"Enter the number of minutes used: ";
    cin>>minutes;

    if(code=='R' || code=='r' || code=='P' || code=='p')
    {
        finalBill=calculateBill(code,time,minutes);
        if(code=='R' || code=='r')
        {
            cout<<"Service type: Regular"<<endl;
        }
        else
        {
            cout<<"Service type: Premium"<<endl;
        }
        cout<<"Total minutes used: "<<minutes<<" minutes"<<endl;
        cout<<"Amount due: $"<<finalBill<<endl;
    }
    else
    {
        cout<<"error";
    }

}


float calculateBill(char code,char time,int minutes)
{
    float total=0.0;
    float finalBill;
    if(code=='R' || code=='r')
    {
        if(minutes>50)
        {
           minutes=minutes-50;
           total=0.20*minutes;
           finalBill=total+10.00; 
        }
        else
        {
            finalBill=total+10.00;
        }
    }

    else if(code=='P' || code=='p')
    {
        if(time=='D' || time=='d')
        {
            if(minutes>75)
            {
                minutes=minutes-75;
                total=0.10*minutes;
                finalBill=total+25.00; 
            }
            else
            {
                finalBill=total+25.00; 
            }
        }
        else if(time=='N' || time=='n')
        {
            if(minutes>100)
            {
                minutes=minutes-100;
                total=0.05*minutes;
                finalBill=total+25.00; 
            }
            else
            {
                finalBill=total+25.00; 
            }
        }
    }
    return finalBill;
}