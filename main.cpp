/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    char symbol = 'T';
    cout << symbol << endl;
    int number1 = 100;
    cout << number1 << endl;
    float number2 = 10.10;
    cout << number2 << endl;
    double number3 = 50.23;
    cout << number3 << endl;
    
    int mynum[5] = {5, 10, 15, 20, 30};
    int sum = mynum[0] + mynum[1] + mynum[2] + mynum[3] +mynum[4];
    cout  << "Sum: " <<  sum << endl;
    int average = sum / 5;
    cout  << "Average: " << average << endl;
  
}
