#include<iostream>
using namespace std;

int greatestNumber(int number);

main()
{
    int number;

    cout << "Enter the number of elements: ";
    cin >>number;
    cout << "Enter " << number << " numbers, one per line: "<<endl;
    int largestNum=greatestNumber(number);
    cout<< "The largest number entered is: "<<largestNum;
}
int greatestNumber(int number)
{
    int greaterNum=0;
    if(number>0)
    {
        int numArray[number];
        int i=0;
        while(i<number)
        {
            cin>>numArray[i];
            i++;
        }
        for(int j=0;j<i;j++)
        {
            if(numArray[j]>greaterNum)
            {
                greaterNum=numArray[j];
            }
        }
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
    return greaterNum;
}
