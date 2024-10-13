#include<iostream>
using namespace std;

string decideActivity(string temperature,string humidity);

int main()
{
    string temperature,humidity;
    string activity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    activity=decideActivity(temperature,humidity);
    cout<<activity;
}

string decideActivity(string temperature,string humidity)
{
    string activity;
    if(temperature=="warm" && humidity=="dry")
    {
        activity="Play tennis";
    }
    else if(temperature=="warm" && humidity=="humid")
    {
        activity="swim";
    }
    else if(temperature=="cold" && humidity=="dry")
    {
        activity="Play basketball";
    }
    else if(temperature=="cold" && humidity=="humid")
    {
        activity="Watch tv";
    }
    return activity;
}