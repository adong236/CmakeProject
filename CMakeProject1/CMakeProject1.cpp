// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

#include <iostream>
using namespace std;
void Func()
{   // first line of Func().
    int dummy = 0;
    int iLocal = 0;	// init iLocal in Func().
    iLocal++;

    string fourtype = "??????????"; //#bp3
    string s1 = "hello"; //#bp4
    string s2 = "World"; //#bp6
}
int recursive(int m)
{
    if (m <= 1)
        return 1;
    return m * recursive(m - 1);
}
int sum(int i, int j)
{
    return i + j;
}

int main()
{
	while (true)
	{
        for (int i = 1; i < 100; i++)
        {
            int j = i; //#bp1
            j++;
        }
        int m = 10;
        Func();
        recursive(6);
        sum(10, 20);
        cout << "Hello CMake." << endl;
	}
}
