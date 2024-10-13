#include<iostream>
using namespace std;

string findZodiacSign(int day,string month);

int main()
{
    int day;
    string month;
    string result;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;
    result=findZodiacSign(day,month);
    cout<<"Zodiac Sign: "<<result;
}

string findZodiacSign(int day,string month)
{
    string result;
    if(((month=="March") && (day>=21 && day<=31)) || ((month=="April") && (day>=1 && day<=19)))
    {
        result="Aries";
    }
    if(((month=="April") && (day>=20 && day<=30)) || ((month=="May") && (day>=1 && day<=20)))
    {
        result="Taurus";
    }
    if(((month=="May") && (day>=21 && day<=31)) || ((month=="June") && (day>=1 && day<=20)))
    {
        result="Gemini";
    }
    if(((month=="June") && (day>=21 && day<=30)) || ((month=="July") && (day>=1 && day<=22)))
    {
        result="Cancer";
    }
    if(((month=="July") && (day>=23 && day<=31)) || ((month=="August") && (day>=1 && day<=22)))
    {
        result="Leo";
    }
    if(((month=="August") && (day>=23 && day<=31)) || ((month=="Septamber") && (day>=1 && day<=22)))
    {
        result="Virgo";
    }
    if(((month=="September") && (day>=23 && day<=30)) || ((month=="October") && (day>=1 && day<=22)))
    {
        result="Libra";
    }
    if(((month=="October") && (day>=23 && day<=31)) || ((month=="November") && (day>=1 && day<=21)))
    {
        result="Scorpio";
    }
    if(((month=="November") && (day>=22 && day<=30)) || ((month=="December") && (day>=1 && day<=21)))
    {
        result="Saggitarius";
    }
    if(((month=="December") && (day>=22 && day<=31)) || ((month=="January") && (day>=1 && day<=19)))
    {
        result="Capricorn";
    }
    if(((month=="January") && (day>=20 && day<=31)) || ((month=="February") && (day>=1 && day<=18)))
    {
        result="Aquarius";
    }
    if(((month=="February") && (day>=19 && day<=29)) || ((month=="March") && (day>=1 && day<=20)))
    {
        result="Pisces";
    }
    return result;
}