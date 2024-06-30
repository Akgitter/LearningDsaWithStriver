//
// Created by HP on 25-06-2024.
//

// int main()
// {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }

// Code to print n to 1 without using n-1
//Backtrace
#include <iostream>

using namespace std;

void f(int i, int n)
{
    if(i>n) return;
    f(i+1,n);
    cout << i << endl ;
}

int main()
{
    int i=1;
    int n;
    cin >> n ;
    f(i,n);

}
