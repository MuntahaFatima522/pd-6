#include<iostream>
#include<string.h>
using namespace std;

string calculateHostelPrices(string month,int stays);

int main()
{
    string month;
    int stays;
    string result;
    cout<<"Enter the month(May,June,July,August,September,October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    result=calculateHostelPrices(month,stays);
    cout<<result;
}

string calculateHostelPrices(string month,int stays)
{
    float studio,apartment;
    float discountStudio;
    float discountApartment;
    string result;

    if(month=="May" || month=="October")
    {
        if(stays<=7)
        {
            studio=stays*50.0;
            apartment=stays*65.0;
        }
        else if(stays>7 && stays<=14)
        {
            studio=stays*50.0;
            discountStudio=(5.0/100.0)*studio;
            studio=studio-discountStudio;
            apartment=stays*65.0;
        }
        else if(stays>14)
        {
            studio=stays*50.0;
            discountStudio=(30.0/100.0)*studio;
            studio=studio-discountStudio;
            apartment=stays*65.0;
            discountApartment=(10.0/100.0)*apartment;
            apartment=apartment-discountApartment;
        }
    }
    else if(month=="June" || month=="September")
    {
        if(stays<=14)
        {
            studio=stays*75.20;
            apartment=stays*68.70;
        }
        else if(stays>14)
        {
            studio=stays*75.20;
            discountStudio=(20.0/100.0)*studio;
            studio=studio-discountStudio;
            apartment=stays*68.70;
            discountApartment=(10.0/100.0)*apartment;
            apartment=apartment-discountApartment;
        }
    }
    else if(month=="July" || month=="August")
    {
        if(stays<=14)
        {
            studio=stays*76.0;
            apartment=stays*77.0;
        }
        else if(stays>14)
        {
            studio=stays*76.0;
            apartment=stays*77.0;
            discountApartment=(10.0/100.0)*apartment;
            apartment=apartment-discountApartment;
        }
    }
    result="Apartment: "+to_string(apartment)+" $.\nStudio: "+to_string(studio)+" $.";
    return result;
}