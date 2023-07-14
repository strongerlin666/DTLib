#ifndef SEQLIST_H
#define SEQLIST_H

#include "List.h"
#include "Exception.h"

namespace DTLib
{

template <typename T>
class SeqList : public List<T>
{
protected:
    T* m_array;
    int m_length;
public:
    bool insert(int i, const T& e)                      // n + 5 ==> O(n + 5) ==> O(n)
    {
        bool ret = ( (0 <= i) && (i <= m_length));      // 1

        ret = ret && (m_length < capacity());           // 1

        if (ret)
        {
            for (int p = m_length - 1; p >= i; p--)     // n, 0
            {
                m_array[p + 1] = m_array[p];
            }

            m_array[i] = e;                             // 1
            m_length++;                                 // 1
        }

        return ret;                                     // 1
    }

    bool insert( const T& e)
    {
        return insert(m_length, e);
    }

    bool remove(int i)                                  // O(n)
    {
        bool ret = ( (0 <= i) && (i < m_length));

        if (ret)
        {
            for (int p = i; p < m_length - 1; p++)      // n - 1
            {
                m_array[p] = m_array[p + 1];
            }

            m_length--;
        }

        return ret;
    }

    bool set(int i, const T& e)                         // O(1)
    {
        bool ret = ( (0 <= i) && (i < m_length));

        if (ret)
        {
            m_array[i] = e;
        }

        return ret;
    }

    bool get(int i, T& e) const                         // O(1)
    {
        bool ret = ( (0 <= i) && (i < m_length));

        if (ret)
        {
            e = m_array[i];
        }

        return ret;
    }

    int length() const                                  // O(1)
    {
        return m_length;
    }

    void clear()
    {
        m_length = 0;
    }

    // 顺序存储线性表的数组访问方式
    T& operator[] (int i)                               // O(1)
    {
        if ( (0 <= i) && (i < m_length))
        {
            return m_array[i];
        }
        else
        {
            THROW_EXCEPTION(IndexOutOfBoundsException, "Parameter i is invalid ...");
        }
    }

    T operator[] (int i) const                          // O(1)
    {
        return (const_cast<SeqList<T>&>(*this))[i];
    }

    // 顺序存储空间的容量
    virtual int capacity() const = 0;
};

}
#endif // SEQLIST_H
