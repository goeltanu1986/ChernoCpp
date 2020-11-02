//
//  CopyConstructorDemo.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/12/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

 class String
 {
 private:
     char* m_Buffer;
     unsigned int m_Size;
    
 public:
     String(const char* string)
     {
 //        m_Size = strlen(string);
         m_Buffer = new char[m_Size + 1];
         std::memcpy(m_Buffer, string, m_Size);
         m_Buffer[m_Size] = 0;
     }
    
 //    Copy constructor
     String(const String& other)
     : m_Size(other.m_Size)      // shallow copy the int
     {
         m_Buffer = new char[m_Size + 1];
         std::memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
     }
    
    
    
 //    If you dont need/want to allow deep copy
 //    String(const String& other) = delete;
    
    
     ~String()
     {
         delete[] m_Buffer;
     }
    
     char& operator[](unsigned int index)
     {
         return m_Buffer[index];
     }
    
     friend std::ostream& operator<<(std::ostream& stream, const String& string);
 };

 std::ostream& operator<<(std::ostream& stream, const String& string)
 {
     stream << string.m_Buffer;
     return stream;
 }

 void PrintString(const String& string)
 // marking it as const makes it not able to change the string at all
 //passing it by reference & helps do not make unnecessary copies of
 // the String and allocate unnecessary memory again and again
 // Always pass objects by const reference, to reduce making copiesd
 {
     std::cout << string << std::endl;
 }


// String string = "Tanu";
// String second = string; //Shallow copy, program crashes because we call the
// destructor called twice on the same memory.
// A shallow copy will copy the pointer to array and the int.
// Will not go to the actual object pointed by the pointer and copy.

// second[2] = 'a'; // changes both the strings with a.

// std::cout << string << std::endl;
