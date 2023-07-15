#include <iostream>
//#include "StaticArray.h"
#include "DynamicArray.h"

using namespace std;
using namespace DTLib;

int main()
{
//    StaticArray<int, 5> s1;

//    for(int i = 0; i < s1.length(); i++)
//    {
//        s1[i] = i * i;
//    }

//    for(int i = 0; i < s1.length(); i++)
//    {
//        cout << s1[i] << endl;
//    }

//    StaticArray<int, 5> s2;

//    s2 = s1;

//    for(int i = 0; i < s2.length(); i++)
//    {
//        cout << s2[i] << endl;
//    }

//    s2[6] = 100;

    DynamicArray<int> s1(5);

    for(int i = 0; i < s1.length(); i++)
    {
        s1[i] = i * i;
    }

    for(int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }

    cout << endl;

    DynamicArray<int> s2(10);

    s2 = s1;

//    s2.resize(8);

    for(int i = 0; i < s2.length(); i++)
    {
        cout << s2[i] << endl;
    }

    cout << endl;

    s2[6] = 100;


    return 0;
}
