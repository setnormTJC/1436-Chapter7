#include <iostream>
#include <map>

using namespace std;

int getCurrentLetterValue(char currentCharacter)
{
    int characterValue = 0; 
    switch (currentCharacter)
    {
    case 'A': 
    case 'E': //use toupper/tolower
    case 'I': 
    case 'L':
    case 'N':   
    case 'O': 
    case 'R': 
    case 'S':
    case 'T': 
    case 'U': 
        characterValue = 1; 
        break;

    case 'D': 
    case 'G': 
        characterValue = 2;
        break; 

    case 'B': 
    case 'C': 
    case 'M': 
    case 'P': 
        //insert other necessary letters (as needed) 
        characterValue = 3; 
        break; 

    case 'F': //H, V, W and Y.
    case 'H': /*(if currentCharacter == 'H' || currentCharacter == 'F')*/
    case 'V': 
    case 'W': 
    case 'Y': 

        characterValue = 4; 
        break; 
        
    case 'K': 
        characterValue = 5; 
        break; 

    case 'J': 
    case 'X': 

        characterValue = 8; 
        break; 

    case 'Q': 
    case 'Z': 
        characterValue = 10; 
        break; 

    default: 
        cout << "That character wasn't handled by the switch cases!\n"; 
        cout << "Returning ZERO points for that character!\n"; 
        break; 
    }

    return characterValue; 

}


int calculateWordPoints(string word)
{

    int score = 0; 

    for (int i = 0; i < word.length(); i++)
    {
        char currentLetter = word[i]; //[] (brackets) mean "index of" (subscript operator) 
                                    //(or character at position i) 

        score = score + getCurrentLetterValue(currentLetter);
    }
    //5 + 2 -> addition operator ("string" + "word") 

    return score; 
}

int main()
{
    string inputWord; 
    cout << "Enter the word (a single WORD only - no spaces): \n";
    cin >> inputWord; 

    int score = calculateWordPoints(inputWord); 
    cout << "That word is worth this many points: " << score << endl; 

    //std::map<char, int> scrabblePointValues = 
    //{
    //    {'A', 1 }, 
    //    {'B', 2}
    //}

    return 0;
}