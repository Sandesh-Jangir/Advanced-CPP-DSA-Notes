#include <iostream>
using namespace std;

void sum_of_range(int x, int y)
{ // Function to get sum of an Arithmetic Progression -> x,x+1,x+2...y.
    int result = 0;
    for (int i = x; i <= y; i++)
    {
        result += i;
    }
    cout << "Sum (Unoptimised Timing) : " << result << endl;
}

void sum_of_range_optimised(int x, int y)
{ // Function to get sum of an Arithmetic Progression -> x,x+1,x+2...y.
    int n = (y - x + 1);
    int result = (n * (2 * x + (y - x) * 1)) / 2; // Formula for sum of an Arithmetic Progression.
    cout << "Sum (Optimised Timing) : " << result << endl;
}

void fibonacci_pattern(int n)
{                      // Function to get the value of n th element of fibonacci series.
    int series[n + 1]; // Main array.

    series[0] = 0;
    series[1] = 1;
    // Because the 0-th element of fibonacci series is 0 and 1-th element is 1.

    for (int i = 2; i <= n; i++)
    {
        series[i] = series[i - 1] + series[i - 2];
    }
    cout << "n-th element of fibonacci pattern (Unoptimised Space) : " << series[n] << endl;
}

void fibonacci_pattern_optimised(int n)
{ // Function to get the value of n th element of fibonacci series.
    if (n == 0 || n == 1) // For some "corner values".
    {
        cout << "n-th element of fibonacci pattern (Optimised Space) : " << n << endl;
    }
    else
    {
        int a = 0;
        int b = 1;
        int c = 1;

        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "n-th element of fibonacci pattern (Optimised Space) : " << c << endl;
    }
    // This algorithm is optimised at space cunsumption as the amount of space requierd is constant no matter how big or small the input is.
}

int main()
{
    /**
     * Time complexity - Time required to perform calculation by the algorithm.
     * # Types of time complexity - Worst, Best & Average.
     * # Asmptotic analysis used to analyse by observing the no. of operations with respect to the input.
     *
     * Space complexity - The amount of space required by the algorithm (apart from input/output).
     * # Asymptotic analysis used to analyse by obesrving the cange in amout of space with respect to the input.
     */

    // Time complexity analysis (example)
    sum_of_range(1, 5);
    sum_of_range_optimised(1, 5);

    // Space Complexity Analyisis (Example)
    fibonacci_pattern(4);
    fibonacci_pattern_optimised(4);
    return 0;
}