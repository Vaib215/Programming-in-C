# Pointers

It is a variable that stores the `*address*` of another variable. 

`The purpose of pointer is to save the memory space and achieve fastest execution.`
## Types of Pointers
1. Typed Pointer - Point to specific type of data. Ex. - int* a, double*a

2. Untyped Pointer - This type of pointer is used to store any type of data {genric pointer } like void*a stores any data.

> & - Address &nbsp; &nbsp; * - Returns the value in that address

<u>Null Pointer</u> - We can create a null pointer by assigning a null value during pointer declaration. This is useful when you don't have any address assigned to a pointer. A null pointer always contain a value - `0` .
Ex.- 
```
{
    int*p=Null;
    printf("%p",ptr);
    // Output - 0
}
```
<u>Void Pointer</u> - A pointer that is not associated with any datatype. It can hold address of any datatype and can typecast to any datatype.

<u>Wild Pointer</u> - A wild pointer is the one that is not intialised for anything. This type of pointer are not sufficient because they may point to unknown location.

<u>Double Pointer</u> - Pointer used to point a pointer. The first pointer is used to store the address of a variable and second pointer is used to store address of first pointer.
## Pointer Arithmetic
We can perform following arithmetic operations on the pointers-
1. Increament
2. Decreament
3. Addition
4. Subtraction
5. Comparison

### Increament Pointer in C
* The rule to increase the pointer is given below:
  
   > `new address = current address + i * size of(data type) `

