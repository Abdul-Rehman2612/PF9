#include<iostream>
using namespace std;

void nextLetter(string word);

main()
{
    string word;

    cout << "Enter a string: ";
    getline(cin,word);

    nextLetter(word);
}
void nextLetter(string word)
{
    string Word=word;
    int i=0;
    char letter;
    cout << "Shifted String: ";
    while(Word[i]!='\0')
    {
        letter=word[i];
        if(letter!=32)
        {
            letter=letter+1;
            if(letter==123)
            {
                letter=97;
            }
            if(letter==91)
            {
                letter=65;
            }
        }
        cout << letter;
        i++;
    }
}