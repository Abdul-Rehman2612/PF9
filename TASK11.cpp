#include<iostream>
using namespace std;
main()
{
    string line;

    cout << "Enter a string: ";
    getline(cin,line);

    int i=0;
    string word=line;
    while(word[i]!='\0')
    {
        i++;
    }
    cout << "String with vowels removed: ";
    for(int j=0;j<i;j++)
    {
        if(word[j]=='a' || word[j]=='A' || word[j]=='e' || word[j]=='E' || word[j]=='i' || word[j]=='I' || word[j]=='o' || word[j]=='O' || word[j]=='u' || word[j]=='U')
        {
            continue;
        }
        cout << word[j];
    }
}