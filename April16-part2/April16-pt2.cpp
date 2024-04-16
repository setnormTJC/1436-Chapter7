#include <iostream>

#include<chrono> //chrono as in "chronological" (related to time) 
                    //we will use this header file/library in Algorithm Analysis (COSC 2436)

using namespace std;


typedef int INTEGER; //INTEGER is an "alias" for int (makes for more "readable" code) 

#define print(a) cout << a << endl; 

namespace MySpace
{
    void aFunctionInMySpace()
    {
        cout << "This is a function in `MySpace`\n";
    }
    int a = 42; 
}

//using namespace MySpace;

int main()
{

    cout << MySpace::a << endl; 
    //MySpace::aFunctionInMySpace(); 
    //aFunctionInMySpace();

    //print(420); 
    //INTEGER a = 42; 

    //cout << a << endl; 

    //cout << "Hello World";

    return 0;
}