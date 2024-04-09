#include <iostream>

using namespace std;

char at(string inputString, int index)
{
    return inputString.at(0); 
}

//demo function overloading!

int main()
{
    //string a = "0123456"; //zeroth, first, second, third 
    
    //cout << at(a, 0) << endl; //what does THIS print? 
    //cout << a.at(6) << endl; 
    //cout << "The number of chars in the string " << a << " is: " << a.size() << endl; 
        //size does NOT (necessarily) return the number of bytes
    
    string greeting = "Hllo, e";

    string name = "Seth";
    
    // the '+' operator can be used to join two (or more) strings 
    string fullGreeting = greeting + name;
  
    cout << fullGreeting << endl;
    //"subscript" (or index) operator is (square) brackets 
    //{}
    //[]
    //    ()
    //an index is a thing in the back of a textbook 

    cout << fullGreeting[1] << endl; 
    //Hello, Seth 
    cout << "the find function found the character 'e' at index = " << 
        fullGreeting.find('e') << endl;


    return 0;
}