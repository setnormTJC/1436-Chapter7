#include <iostream>

#include<string>

using namespace std;

char at(string inputString, int index)
{
    return inputString.at(index); 
}

//demo function overloading!
void printSum(int a, int b)
{
    cout << a << " + " << b << " = " << a + b << endl; 
}

/*this overload takes three string and returns nuthin'!*/
void printSum(string a, string b, string c)
{
    cout << a + b + c << endl; 
}

/*THIS overload returns a STRING and takes two characters*/
string printSum(char a, char b)
{
    string first = std::to_string(a); 
    string second = std::to_string(b); 

    string result = first + second; 

    return result;

}


int main()
{
    ////string a = "0123456"; //zeroth, first, second, third 
    //
    ////cout << at(a, 0) << endl; //what does THIS print? 
    ////cout << a.at(6) << endl; 
    ////cout << "The number of chars in the string " << a << " is: " << a.size() << endl; 
    //    //size does NOT (necessarily) return the number of bytes
    //
    //string greeting = "Hllo, e";

    //string name = "Seth";
    //
    //// the '+' operator can be used to join two (or more) strings 
    ////+ means "concatenation" when it is applied to "string" types 
    //string fullGreeting = greeting + name + "asdfasdfasdf";
  
    //cout << fullGreeting << endl;
    ////"subscript" (or index) operator is (square) brackets 
    ////{}
    ////[]
    ////    ()
    ////an index is a thing in the back of a textbook 

    ////"1234abc"
    //string otherString = "1234abc";

    //cout <<"The thing I just typed yields: " << otherString[4] << endl;
    //cout << fullGreeting[1] << endl; 
    ////Hello, Seth 
    //cout << "the find function found the character 'e' at index = " << 
    //    fullGreeting.find('e') << endl;

    //size_t
    string otherExample = "alphabet";
    int firstPositionAtWhichAIsFound = otherExample.find('a'); 
    cout << otherExample << " has an 'a' at index: " << firstPositionAtWhichAIsFound<< endl;


    cout << otherExample << " has ANOTHER 'a' at index: "
        << otherExample.find('a', firstPositionAtWhichAIsFound + 1)  << endl;
    //printSum()
    //printSum(1, 2);
    //printSum("I do", "not like", "green eggs and ham");

    cout << "What is length of " << otherExample << " ... it is: " << otherExample.length() << endl; 

    for (int i = 0; i < otherExample.length(); i++)
    {
        cout << (char)(toupper(otherExample.at(i))) << "\t"; //tab 
    }




    return 0;
}