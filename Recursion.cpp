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

// Recursion on array
void print_array(int *arr, int index, int n){
    if (index < n){
        cout << arr[index] << " ";
        print_array(arr, index+1, n);
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
     * 
     *## Time Complexity of a recursive function = no. of times the function is called * time consumed by 1 function call.
     * 
     * Recursions on arrays and strings - C++
     * 
     * To solve a problem related to arrays and strings using recursion, most of the times we would have to read the array. Therefore majority of times our function would look like this -> func (arr, index, array_length ....){ function_operations }
     */

    // Let's Take an example of a factorial function.
    cout << factorial(5) << endl;

    // Printing an array using recursion.
    int arr[] = {1,2,3,4,5,10};
    print_array(arr, 0, 6);
    return 0;
}