/*
 * Lab     : 01 - T3
 * Name    : Zainab Tanveer 
 * Roll No : SE-01
 * Date    : 19-11-2026
 * Purpose : Fix 5 bugs in given code
 */

#include <iostream>
using namespace std; // BUG 1: semicolon was missing after std

int main()
{
    cout << "Welcome to the lab!" << endl; // BUG 2: semicolon was not added at the end
    cout << "Today we learn \"C++.\" " << endl; // BUG 3: capital C was used instead of small cout
    cout << "Files are in C:\\Lab01" << endl; // BUG 4: one backslash changed to two for the path
    cout << "Bye!" << endl; // BUG 5: closing inverted comma was missing before <<
    return 0;
}
