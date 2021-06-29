#include <stdio.h>

void funciton(int x)
{
    cout << "funciton::you have provoded the interger:" << x << "\n";
    cout << "function::added a line here" << x << "\n";
}


void funciton2(int x)
{
    cout << "funciton::you have provoded the interger:" << x << "\n";
}

void function3()
{
    cout << "funciton3::you have provoded the interger:" << x << "\n";
}

int main()
{
    int x = 10;
    funciton(x);
    function2(x);
}