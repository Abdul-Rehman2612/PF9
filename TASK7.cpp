#include<iostream>
using namespace std;

double checkResistance(int number);

main()
{
    int number;

    cout << "Enter the number of resistors in the series circuit: ";
    cin >>number;

    cout << "Enter the resistance values (in ohms) of the " << number << " resistors, one per line: "<<endl;
    double totalResistance=checkResistance(number);
    cout <<"The total resistance of the series circuit is "<<totalResistance<<" ohms.";
}
double checkResistance(int number)
{
    if(number>0)
    {
        double resistance[number];
        double totalResistance=0;
        int i=0;
        while(i<number)
        {
            cin>>resistance[i];
            totalResistance=totalResistance+resistance[i];
            i++;
        }
        return totalResistance;
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}
