#include<iostream>
using namespace std;

void reverseString(string word);

main()
{
    string word;

    cout << "Enter a string: ";
    getline(cin,word);

    reverseString(word);
}
void reverseString(string word)
{
    string Word=word;
    int i=0;
    while(Word[i]!='\0')
    {
        i++;
    }
    cout<<"Reversed String: ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<Word[j];
    }
}