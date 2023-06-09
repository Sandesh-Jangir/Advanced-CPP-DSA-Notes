#include <iostream>
using namespace std;

// This function is to understand  "call-by-referance" with the help of pointers.
void CallByReferance_Pointers(int *x, int *y);

// Passing arrays as referance using pointer.
void ProcessArray(int *arr, int array_lenght); 

int main()
{
    /**
     * Introduction
     * 
     * If we want to access of a memory bucket we can use "address-of operator" -> &
     * 'address-of' operator returns a hexadecimal value.
     * 
     * Pointers - C++
     *
     * Syntax : datatype *pointer_name;
     * (Here datatype of the pointer variable is the datatype of the variable whose's address you want to store in.)
     * Pointers are special variables which stores the address of a particular variable.
     * 
     * To access the data via its address, we use dereferance operator -> *
     * 
     * Pointer Arithmatic - C++
     * 
     * Pointer arithmatic operations are of two types -> Increment and Decrement
     * Here the increment or decrement of a pointer value refers to the shift in the memory location that the pointer is pointing to.(The shift is dependent on the size of the datatype).
     * Using prefix(--) postfix(++) operators -> First the value of the pointer will be returned then the pointer will be updated. example -> cout << *ptr++ << ", " << ptr; <- Output(example) : 10, 0x61fef8
     * Case 2nd -> cout << (*ptr)++; <- Output(example) : 11;
     * (Simmilar goes for prefix operator).
     * 
     * Arrays as Pointers - C++
     * 
     * The name of the array acts as a pointer to the array's element at 0th index.
     * Let Say -> int arr[] = {1,2,3}; Therefore "arr" -> &arr[0];
     * Hence all the pointer arithmetic can also be used at the arrays and "call by reference" can also be used to pass arrays in the function by reference.
     * 
     * Types of Pointers - C++
     * 
     1. Wild Pointer -> When a pointer is declared but a specific value is not assigned to it, a garbage value is stored in this pointer and thus it points towards a random address assigned by the compiler.
     2. Null Pointer -> If we want to have a pointer that is just declared but will be assigned later and we doesn't want it to be initialised by a garbage value by the compiler, we can use null pointer. example -> int *ptr = NULL; But the drawback is that we can't dereference;
     3. Dangling Pointers -> It is the type of pointer that points to a memory location that isn't valid. Sample Usecase -> *ptr was declared at the global scope and then was assigned with the address of a variable that was existing in a for loop. therefore after the for loop will be completed that particular memory location will not contain the same variable. 
     4. Void Pointers (Generic Pointers) -> It is a special pointer that can point to any datatype value. Example -> Let's say x is an int variable and y is a float, then -> void *ptr = &x; ptr = &y; <- Compiles without error.
     */

    int x = 10;
    float y = 7.5;

    int *ptr; // Declaring the pointer 
    ptr = &x; // Assigning the value to the pointer

    float *ptr_float = &y; // Declaring and initializing the pointer.

    cout << "Address : " << ptr << ", " << ptr_float << endl; // Accessing the addresses of x and y respectively.
    cout << "The very next addresses are : " << ptr+1 << ", " << ptr_float+1 <<endl; // Pointer Arithmatic operations.
    cout << "Value : " << *ptr << ", " << *ptr_float <<endl; // Accessing the values of x and y through dereferencing.
    
    // How to pass by referance with pointers.
    cout <<endl<< "-------Pass Value By Reference Using Pointers------"<<endl;
    int a = 10, b = 20;
    CallByReferance_Pointers(&a, &b);
    cout << endl << "A (New) : " << a << " B (New) : " << b << endl;

    // Arrays As Pointers
    int arr[4] = {2,4,8,16};
    cout << "Array (Processed Using Pointer Theory) : ";
    ProcessArray(arr, 4);

    return 0;
}

// Referencing using pointers.
void CallByReferance_Pointers(int *x, int *y){
    *x = 100, *y = 200;
}

// Processing arrays using pointers.
void ProcessArray(int *arr, int array_lenght){
    for (int i = 0; i < array_lenght; i++)
    {
        cout << *(arr+i) << " ";
    }
}