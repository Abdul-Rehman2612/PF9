#include<iostream>
using namespace std;

void reverseOrder(int number);

main()
{
    int number;

    cout << "Enter the number of elements: ";
    cin >>number;

    reverseOrder(number);
}
void reverseOrder(int number)
{
    if(number>0)
    {
        int numArray[number];
        int i=0;
        cout << "Enter " << number << " numbers, one per line: "<<endl;
        while(i<number)
        {
            cin>>numArray[i];
            i++;
        }
        cout << "Numbers in reverse order: ";
        for(int j=i-1;j>=0;j--)
        {
            cout << numArray[j] << " ";
        }
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}