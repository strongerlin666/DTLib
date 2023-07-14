#include <iostream>
#include "DynamicList.h"

using namespace std;
using namespace DTLib;

int main()
{
    DynamicList<int> l(5);

    for(int i = 0; i < l.capacity(); i++)
    {
        l.insert(i);
    }

    for(int i = 0; i < l.capacity(); i++)
    {
        cout << l[i] << endl;
    }

    return 0;
}
