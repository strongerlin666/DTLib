#include <iostream>
#include "Object.h"

using namespace std;
using namespace DTLib;

class Test : public Object
{
public:
    unsigned long long i;
    unsigned long long j;
};

class Child : public Test
{
public:
    unsigned long long k;
};

int main()
{
    Object* obj1 = new Test();
    Object* obj2 = new Child();

    cout << "obj1 = " << obj1 << endl;
    cout << "obj2 = " << obj2 << endl;
    // ...

    delete obj1;
    delete obj2;

    return 0;
}
