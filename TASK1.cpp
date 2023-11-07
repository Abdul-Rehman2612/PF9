#include<iostream>
using namespace std;

void arrayPos(string word);

main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    arrayPos(word);
}
void arrayPos(string word)
{
    string Word=word;
    for(int i = 0;Word[i]!='\0';i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }
}