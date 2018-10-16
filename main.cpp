/*
    File: main.cpp
    
    Description: This program will will implement
    a function that takes a string as a parameter 
    and returns a count of the number of 'a' 
    characters in the string.
    
    Author: Jacob McGuire
    
    Email: jacobmc0390@student.vvc.edu
    
    Date: 10 / 16 / 2018	
*/

#include<iostream>
#include<string>
using namespace std;


int isA(string s)
{
    int num = 0;
    for(int i = 0; i < s.length(); i ++)
    {
        if(s.at(i) == 'a' || s.at(i) == 'A')
        {
            num++;
        }
    }
    return num;
}

int main()
{
    string a = "abagaiajAAA";
    cout << isA(a) << endl;
    return 0;
}

 

