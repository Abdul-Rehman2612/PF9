#include<iostream>
using namespace std;

void uniqueCheck(int number);
bool isAlreadyEntered(int arr[], int size, int number);

main()
{
    int number;

    cout << "Enter the number of elements: ";
    cin >>number;
    cout << "Enter " << number << " numbers, one per line: "<<endl;
    uniqueCheck(number);
    
}
void uniqueCheck(int number)
{
    if(number>0)
    {
        int numArray[number];
        int i=0;
        bool x[number];
        while(i<number)
        {
            cin>>numArray[i];
            x[i]=isAlreadyEntered(numArray,i,number);
            i++;
        }
        cout << "Unique numbers entered: ";
        for(int j=0;j<i;j++)
        {
            if(x[j]==true)
            {
                cout << numArray[j] << " ";
            }
        }

    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}
bool isAlreadyEntered(int arr[],int size,int number)
{
    for(int j=size-1;j>=0;j--)
    {
        if(arr[j]==arr[size])
        {
            cout << "Already Entered: " << arr[size] << endl;
            return false;
            break;
        }
        else
        {
            return true;
        }
    } 
}