#include <iostream>
using namespace std;

// This function is to understand  "call-by-referance" with the help of pointers.
void CallByReferance_Pointers(int *x, int *y);

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
    cout << endl << "A (New) : " << a << " B (New) : " << b;
    return 0;
}

// Referencing using pointers.
void CallByReferance_Pointers(int *x, int *y){
    *x = 100, *y = 200;
}