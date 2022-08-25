#include <iostream>
using namespace std;



void countDown(int i)
{
    // base case (exit condition)
    if (i == 1)
        cout << i << endl;
    // recursive case (pass variable altering it so it gets closer to the exit condition)
    else
    {
        cout << i << endl;
        // recursive call, calls the function passing and adjusted value moving towards the base case
        countdown(i-1);
    }

}


void countUp(int i)
{
    
    if (i == 0) // base case
        return;
    countup(i - 1); // recursive call
    cout << i << endl;

}

// expects positive integer
int summation(int i)
{
    if (i <= 1) // base case
        return i;
    return i + summation(i - 1); // recursive call
}



int factorial(int i)
{
    if (i == 1 || i == 0) // base case
        return 1;
    return i * factorial(i - 1); // recursive call
}


int fibonacci(int i)
{
    if (i <= 1)
        return 1;
    return fibonacci(i-1) + fibonacci(i-2);
}



int main()
{

    int i;
    cout << "Enter number: ";
    cin >> i;
    countUp(i);
    countDown(i);
    summation(i):
    factorial(i);
    fibonacci(i);
}