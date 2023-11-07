#include<iostream>
using namespace std;

void insertArrayInMiddle(int i,int j,int elements1[],int elements2[]);

main()
{
    int number1,number2;
    int i=0,j=0;
    int elements1[i],elements2[j];

    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> number1;
    cout << "Enter " << number1 << " elements for the first array, one per line: " << endl;
    while(i<number1)
    {
        cin >> elements1[i];
        i++;
    }

    cout << "Enter the number of elements for the second array: ";
    cin >> number2;
    cout << "Enter " << number2 << " elements for the second array, one per line: " << endl;
    while(j<number2)
    {
        cin >> elements2[j];
        j++;
    }

    insertArrayInMiddle(i,j,elements1,elements2);
}
void insertArrayInMiddle(int i,int j,int elements1[],int elements2[])
{
    cout << "Resulting array: ["<< elements1[0] << ", " ;

    int num=j;
    for(j=0;j<num;j++)
    {
        cout << elements2[j] << ", " ;
    }

    cout << elements1[1] << "]" ;
}
