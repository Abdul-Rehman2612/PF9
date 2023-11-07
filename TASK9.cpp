#include<iostream>
using namespace std;

bool canWePayWithChange(double charge[],double totalDue);

main()
{
    double charge[3],totalDue;
    float quarters,dimes,nickels,pennies;

    cout << "Enter quarters: ";
    cin >> quarters;
    charge[0]=quarters*0.25;

    cout << "Enter dimes: ";
    cin >> dimes;
    charge[1]=dimes*0.10;

    cout << "Enter nickels: ";
    cin >> nickels;
    charge[2]=nickels*0.05;

    cout << "Enter pennies: ";
    cin >> pennies;
    charge[3]=pennies*0.01;

    cout << "Enter the total amount due: $";
    cin >> totalDue;

    bool x = canWePayWithChange(charge,totalDue);

    cout << "Can you pay the amount? ";
    if(x==true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
bool canWePayWithChange(double charge[],double totalDue)
{
    double total=0;
    for(int i=0;i<=3;i++)
    {
        total=total+charge[i];
    }
    if(total>=totalDue)
    {
        return true;
    }
    else
    {
        return false;
    }
}