#include<iostream>
using namespace std;

void jazzified(string chord[],int numChords);

main()
{
    int numChords;

    cout << "Enter the number of chords: ";
    cin >> numChords;

    cout << "Enter " << numChords << " chords, one per line: " << endl;
    int i=0;
    string chord[numChords];
    while(i<numChords)
    {
        cin >> chord[i];
        i++;
    }

    jazzified(chord,numChords);
}
void jazzified(string chord[],int numChords)
{
    string word;
    cout << "Jazzified chords: [";
    for(int i=0;i<numChords;i++)
    {
        word=chord[i];
        string jazzifiedChord=chord[i];
        int j=0;
        while(jazzifiedChord[j]!='\0')
        {
            j++;
        }
        int size;
        for(size=0;size<j;size++)
        {
            if(jazzifiedChord[size]=='7')
            {
                break;
            }
            else if(size==(j-1) && jazzifiedChord[size]!='7')
            {
                word=word+"7";
            }
        }
        if(i==(numChords-1))
        {
            cout << word;
            break;
        }
        cout << word << ", ";
    }
    cout << "]";
    
}