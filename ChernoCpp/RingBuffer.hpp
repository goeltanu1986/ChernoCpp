//
//  RingBuffer.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 11/1/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef RingBuffer_hpp
#define RingBuffer_hpp

#include <iostream>

using namespace std;

template<class T>
class ring
{
public:
    class iterator;
private:
    int m_size;
    T *m_values;
    int m_pos;

public:
    ring(int size):m_size(size),
            m_values(NULL),
            m_pos(0)
    {
        m_values = new T[size];
    }

    ~ring()
    {
        delete [] m_values;
    }

    T &get(int pos)
    {
        return m_values[pos];
    }

    int size()
    {
        return m_size;
    }

    iterator begin()
    {
        return iterator(0, *this);
    }

    iterator end()
    {
        return iterator(m_size, *this);
    }

    void add(T values)
    {
        m_values[m_pos] = values;
        m_pos++;

        if(m_pos == m_size)
        {
            m_pos = 0;
        }
    }
};

template<class T>
class ring<T>::iterator
{
private:
    int m_pos;
    ring &m_ring;
public:
    iterator(int pos, ring &ring):m_pos(pos), m_ring(ring)
    {
    }

    iterator &operator++(int)
    {
        m_pos++;
        return *this;
    }

    bool operator!=(const iterator &other) const
    {
        return m_pos != other.m_pos;
    }

    T &operator*()
    {
        return m_ring.get(m_pos);
    }
};

#endif /* RingBuffer_hpp */
