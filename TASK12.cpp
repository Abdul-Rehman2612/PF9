#include<iostream>
using namespace std;

bool isSpecialArray(int arr[],int size);

main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements of the array: "<<endl;
    
    int i=0;
    int arr[i];
    while(i<size)
    {
        cin >> arr[i];
        i++;
    }

    bool x = isSpecialArray(arr,size);

    if(x==true)
    {
        cout << "The array is special";
    }
    else
    {
        cout << "The array is not special";
    }
}
bool isSpecialArray(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
            count++;
        }
        else if(arr[i]%2!=0 && i%2!=0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    if(count==size)
    {
        return true;
    }
    else
    {
        return false;
    }
}