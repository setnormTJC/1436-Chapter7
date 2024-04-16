#include <iostream>

using namespace std;

void findCharacterInString(string inputString, char targetChar)
{
    int numberOfOccurences = 0; //optional
    for (int i = 0; i < inputString.length(); i++)
    {
        if (inputString[i] == targetChar)
        {
            cout << "Found at index " << i << endl;
            numberOfOccurences++;
        }
    }
    cout << "Found '" << targetChar << "' "
        << numberOfOccurences << " times." << endl;
}

void myReplace(string input, char charToReplace)
{
    //...insert function definition (figure it out on your own, if you like) 
}
int main()
{

    string someString = "2345678";
    //cout << "How to replace a SINGLE character?\n";
    //someString.replace(3, 2, "a"); //234a78?

   cout << someString.substr(3, 2) << endl; //substring is similar to math word: subset

    //cout << someString << endl; 

    //while (true) //intentional infinite loop 
    //{
    //    string goofyCityName = "Kalamazoo";
    //    cout << "Enter the character you want to look for ...\n";
    //    char characterToSearchFor;

    //    cin >> characterToSearchFor;

    //    findCharacterInString(goofyCityName, characterToSearchFor);
    //}



    //string aSoundADogMakes = "woof!"; 
    //cout << "Initial sound that a dog makes (upon approaching a fence): " << aSoundADogMakes << endl; 
    //aSoundADogMakes.append("WOOF BARK!");

    //cout << "After exacerbating the situation by coming closer and poking a stick through the fence: "
    //    << aSoundADogMakes << endl; 
    //
    //NOTE that appending is different from concatenation (+ operator on strings) 

    //string emptyString = "adsfasdfsadm";
    //if (emptyString.empty() == true)
    //{
    //    cout << "That string is empty (ie: it has 0 characters inside of it)\n"; 
    //}
    //else
    //{
    //    cout << emptyString << " is NOT empty (it DOES have some characters)\n";

    //    cout << "Let's make it empty for you ...\n";

    //    emptyString.clear(); 

    //    //\n makes a blank line (more space to read the text) 
    //    cout << "\n\nNOW that string is: " << emptyString << endl; 
    //}

    return 0;
}