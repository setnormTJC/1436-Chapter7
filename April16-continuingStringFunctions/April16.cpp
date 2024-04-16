#include <iostream>

using namespace std;


string replaceMatchedCharacter(string a, string b, char c)
{
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == c) {
            b[i] = c;
        }
    }
    return b;
}

int main()
{
    string word1 = "word";
    string word2 = "toad";

    string resultOfReplace = replaceMatchedCharacter(word1, word2, 'r');
    cout << resultOfReplace << endl; 
    //how to insert an 'a' in the middle 
    //word.insert(6, 10, 'z');//alphbetzzzzzzzzzz 
    //aaaaalphbet
    //cout << "What happened? " << word << endl; 
    //word.replace()
    //replace demo: 


    return 0;
}