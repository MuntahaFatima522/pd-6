#include<iostream>
using namespace std;

int calculateVolleyBallGames(string year,int holidays,int weekends);

int main()
{
    string year;
    int holidays,weekends;
    int result;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>weekends;
    result=calculateVolleyBallGames(year,holidays,weekends);
    cout<<result;
}

int calculateVolleyBallGames(string year,int holidays,int weekends)
{
    float playInHolidays,playInHome,playInSofia;
    float weekendsInSofia;
    float freeWeekends;
    float totalPlay,extra;
    playInHolidays=(2.0/3.0)*holidays;
    weekendsInSofia=48-weekends;
    playInSofia=(3.0/4.0)*weekendsInSofia;
    playInHome=(3.0/4.0)*weekends;
    totalPlay=playInHolidays+playInHome+playInSofia;
    if(year=="leap")
    {
        extra=(15.0/100.0)*totalPlay;
        totalPlay=totalPlay+extra;
    }
    return totalPlay;
}