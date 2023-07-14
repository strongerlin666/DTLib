#include "Object.h"
#include <cstdlib>

using namespace std;

namespace DTLib
{

void* Object::operator new (size_t size) throw()
{
    return malloc(size);
}

void Object::operator delete (void* p)
{
    free(p);
}

void* Object::operator new[] (size_t size) throw()
{
    return malloc(size);
}

void Object::operator delete[] (void* p)
{
    free(p);
}

Object::~Object()
{

}

}
