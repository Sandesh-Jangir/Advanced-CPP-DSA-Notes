#include <iostream>
using namespace std;

// This is the example of a recursive function.
int factorial(int n)
{
    if (n == 1){ // Base Case
        return 1;
    }else{
        return (n * factorial(n-1)); // Here the whole product is self work and the factorial(n-1) is assumption. 
    }
}
int main()
{
    /**
     * 
     * Recursion - C++
     * 
     * In recursion we try to solve a bigger problem by finding out solutions to smaller sub problems. We represent these problems in the the form of functions and these functions calls itself to solve smaller sub-problems.
     * 
     * Principal of mathematical induction - Programming
     * 
     * It is an approach used to prove formulas with the hepl of three cases - Base case, Asumption case, Self Work.
     * Base Case - It is the value whose result is already known when applied into the formula.
     * Assumption - It is the value that is assumed to work perfectly fine with the formula.
     * Self Work - The process to prove the formula with the help of base case and assumption.
     */

    // Let's Take an example of a factorial function.
    cout << factorial(5) << endl;
    return 0;
}